#include <stdio.h>
#include <string.h>
#include <math.h>
#include "../boolean.h"

int isHex(const char hexNumber[], const int hexLength) {
    const int correctStart = hexNumber[0] == '0' && (hexNumber[1] == 'x' || hexNumber[1] == 'X');

    if (correctStart) {
        int i = 2;
        int currentChar = 0;

        while (i < hexLength) {
            currentChar = hexNumber[i];
            if (currentChar < '0' ||
                ('9' < currentChar && currentChar < 'A') ||
                ('F' < currentChar && currentChar < 'a') ||
                'f' < currentChar) {
                return FALSE;
            }

            i++;
        }
        return TRUE;
    }

    return FALSE;
}

int hexLetterToNumber(const char hexLetter) {
    if ('A' <= hexLetter && hexLetter <= 'F') {
        return hexLetter - 55;
    } else if ('a' <= hexLetter && hexLetter <= 'f') {
        return hexLetter - 87;
    } else {
        return hexLetter - 48;
    }
}

double hexToDecimal(const char hexNumber[]) {
    const int hexLength = strlen(hexNumber);

    if (!isHex(hexNumber, hexLength)) {
        return printf("The number is not in a hex format\n");
    }

    int i = 2;
    double result = 0.00;
    double j = hexLength - 3;

    while (i < hexLength) {
        result += hexLetterToNumber(hexNumber[i]) * pow(16.00, j);
        j--;
        i++;
    }
    return result;
}

void main() {
    const char hex[100] = {'0', 'X', 'a', 'a', 'B', '\0'};
    printf("Decimal: %.0f\n", hexToDecimal(hex));
}