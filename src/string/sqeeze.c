#include <stdio.h>
#include <string.h>
#include "../std/utils.h"
#include "utils.h"
#include "../boolean.h"

void sqeeze() {
    char sampleLine[1000];
    char sqeezedLine[1000];
    char* sampleTitle = "Please enter the sample line\n";
    char* sqeezedTitle = "Please enter the line for sqeeze\n";
    writeNextLine(sampleLine, sampleTitle);
    writeNextLine(sqeezedLine, sqeezedTitle);

    int i = 0;
    int currentSymbol = 0;

    printf("The sqeezed string: ");
    while (sqeezedLine[i] != '\0') {
        currentSymbol = sqeezedLine[i];
        i++;

        if (charFound(currentSymbol, sampleLine)) {
            continue;
        }

        putchar(currentSymbol);
    }
    putchar(NEW_LINE);
}

void main() {
    sqeeze();
}