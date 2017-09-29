#include <stdio.h>
#include <string.h>
#include "chars.h"
#include "../boolean.h"

#define MAX_LINE_LENGTH 100

// TODO: print in runtime
void printLimitedLines() {
    const int lineLimit = 10;
    int i = 0;
    int currentLineLength = 0;
    char c = 0;

    while ((c = getchar()) != ESC) {
        currentLineLength++;

        if (currentLineLength == lineLimit) {
            putchar(NEW_LINE);
            currentLineLength = 0;
        }
        putchar(c);

        i++;
    }
}

void main() {
    printLimitedLines();
}
