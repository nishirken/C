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
    for (int i = 0; i < lineLength; ++i) {
        printf("%c", line[i]);
    }
    putchar(NEW_LINE);
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

void main() {
    printOnlyShortStrings();
}
