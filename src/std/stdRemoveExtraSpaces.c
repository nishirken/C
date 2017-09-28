#include <stdio.h>
#include <string.h>
#include "utils.h"
#include "chars.h"
#include "../boolean.h"

#define MAX_LINE_LENGTH 1000

void removeExtraSpaces(char line[], const int lineLength) {
    int i = 0;
    int j = 0;
    int prevSpace = FALSE;
    char temp[lineLength + 1];
    char currentSymbol = 0;

    while (line[i] != '\0') {
        currentSymbol = line[i];
        if (currentSymbol == TAB) {
            currentSymbol = SPACE;
        }
        if (currentSymbol == SPACE) {
            if (!prevSpace) {
                temp[j] = currentSymbol;
                j++;
            }
            prevSpace = TRUE;
        } else {
            temp[j] = currentSymbol;
            prevSpace = FALSE;
            j++;
        }
        i++;
    }
    strcpy(line, temp);
}

void removeEmptyLines(char line[], const int lineLength) {
    int i = 0;
    int j = 0;
    int prevNewLine = FALSE;
    char temp[lineLength + 1];
    char currentSymbol = 0;

    while (line[i] != '\0') {
        currentSymbol = line[i];
        if (currentSymbol == NEW_LINE) {
            prevNewLine = TRUE;
        } else {
            if (prevNewLine) {
                temp[j] = NEW_LINE;
                temp[j + 1] = currentSymbol;
                j = j + 2;
            } else {
                temp[j] = currentSymbol;
                j++;
            }
            prevNewLine = FALSE;
        }
        i++;
    }

    strcpy(line, temp);
}

void printTrimmedString() {
    char line[MAX_LINE_LENGTH];

    writeLine(line);
    const int lineLength = strlen(line);
    removeExtraSpaces(line, lineLength);
    removeEmptyLines(line, lineLength);
    printLine(line);
}

void main() {
    printTrimmedString();
}