#include <stdio.h>

int boolean(int value) {
    return value != EOF;
}

#define NEW_LINE 10
#define TAB 9
#define SPACE 32
#define BACK_SPACE 8
#define BACK_SLASH 92

void symbolCount() {
    int c = 0;
    long newLineCount = 0;
    long tabCount = 0;
    long spaceCount = 0;

    while (boolean(c = getchar())) {
        if (c == NEW_LINE) {
            ++newLineCount;
            printf("New line count: %ld\n", newLineCount);
        } else if (c == TAB) {
            ++tabCount;
            printf("Tab line count: %ld\n", tabCount);
        } else if (c == SPACE) {
            ++spaceCount;
            printf("Space line count: %ld\n", spaceCount);
        }
    }
}

void replaceSpaces() {
    int c = 0;
    int space = 0;

    while (boolean(c = getchar()) && c != NEW_LINE) {
        space = (c == SPACE) ? space + 1 : 0;
        if (space <= 1) {
            putchar(c);
        }
    }
}

void showSymbols() {
    int c = 0;

    while (boolean(c = getchar()) && c != NEW_LINE) {
        if (c == TAB) {
            printf("%s","\\t");
        }
        else if (c == BACK_SPACE) {
            printf("%s","\\b");
        }
        else if (c == BACK_SLASH) {
            printf("%s","\\\\");
        }
        else {
            putchar(c);
        }
    }
}

void main() {
    /*symbolCount();*/
    /*replaceSpaces();*/
    showSymbols();
}
