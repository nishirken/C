#include "../boolean.h"

int charFound(char searchSymbol,char lineForSearch[]) {
    int j = 0;

    while (lineForSearch[j] != '\0') {
        if (searchSymbol == lineForSearch[j]) {
            return TRUE;
        }
        j++;
    }

    return FALSE;
}

int searchCharIndex(const char sampleString[], const char searchChar) {
    int i = 0;
    int currentChar = 0;

    while (sampleString[i] != '\0') {
        currentChar = sampleString[i];

        if (currentChar == searchChar) {
            return i;
        }
        i++;
    }

    return -1;
}