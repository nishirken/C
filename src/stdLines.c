#include <stdio.h>

#define NEW_LINE 10
#define TAB 9
#define SPACE 32
#define ESC 27
#define TRUE 1
#define FALSE 0

void resetLine(char line[]) {
    int i = 0;
    while (line[i] != 0) {
        line[i] = 0;
        ++i;
    }
}

void printLine(char line[], int lineLength) {
    printf("Short string is: ");
    for (int i = 0; i < lineLength; ++i) {
        printf("%c", line[i]);
    }
    printf("\n");
}

void printOnlyShortStrings() {
    int c;
    int maxLineLength = 6;
    char line[maxLineLength];

    for (int i = 0; (c = getchar()) != EOF && c != ESC; ++i) {
        line[i] = c;
        if (c == NEW_LINE) {
            if (i < maxLineLength) {
                printLine(line, i);
            } else {
                printf("Pass long string\n");
            }
            resetLine(line);
            i = 0;
        }
    }
}

void removeExtraSpaces() {
    int c;
    int prevSpace = FALSE;

    for (int i = 0; (c = getchar()) != EOF && c != ESC; ++i) {
        if (c == TAB) {
            c = SPACE;
        }
        if (c == SPACE) {
            if (!prevSpace) {
                printf("%c", c);
            }
            prevSpace = TRUE;
        } else {
            printf("%c", c);
            prevSpace = FALSE;
        }
    }
}

void main() {
    /*printOnlyShortStrings();*/
    removeExtraSpaces();
}
