#include <ctype.h>
#include <curses.h>
#include <stdio.h>

int getNumberFromCode(const int code) {
    const int ASCII_ZERO_CODE = 48;
    return code - ASCII_ZERO_CODE;
}

int getIntPart(int *code) {
    int intPart = getNumberFromCode(*code);
    
    while (isdigit((*code = getchar()))) {
        intPart = getNumberFromCode(*code) + 10 * intPart;
    }
    return intPart;
}

float getFloatPart(int *code) {
    float i = 10.0;
    float floatPart = getNumberFromCode(*code) / i;
    
    while(isdigit(*code = getchar())) {
        i *= 10;
        floatPart = getNumberFromCode(*code) / i + floatPart;
    }
    return floatPart;
}

int getFloat(float *pn) {
    int c = -1;
    int intPart = 0;
    float floatPart = 0.0;
    int numbersBeforeDot[1000];

    // Skip not digit
    while (!isdigit(c = getchar()));

    intPart = getIntPart(&c);
    
    if (c == '.' && (c = getchar())) {
        floatPart = getFloatPart(&c);
    }
    *pn = intPart + floatPart;
}

void main() {
    int i = 0;
    const int maxLength = 1000;
    float floats[maxLength];

    for (i; i < maxLength && getFloat(&floats[i]) != EOF; i++) {
        printf("%f\n", floats[i]);
    }
}
