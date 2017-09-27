#include <stdio.h>
#include <string.h>
#include "chars.h"

#define MAX_LINE_LENGTH 100

void writeLine(char line[]) {
    int c = 0;
    int i = 0;

    while ((c = getchar()) != ESC) {
        line[i] = c;
        i++;
    }
}

void printLine(const char line[]) {
    printf("%s\n", line);
};

char reverseLine(char line[]) {
    const int lineLength = strlen(line);
    char temp[lineLength + 1];
    int i = 0;
    int j = lineLength;

    while (j != 0) {
        temp[j - 1] = line[i];
        i++;
        j--;
    }

    j = lineLength;
    i = 0;

    while (j != 0) {
        line[i] = temp[i];
        i++;
        j--;
    }
}

void main() {
    char line[MAX_LINE_LENGTH];

    writeLine(line);
    reverseLine(line);
    printLine(line);
}