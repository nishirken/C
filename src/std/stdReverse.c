#include <stdio.h>
#include <string.h>
#include "utils.h"
#include "chars.h"

#define MAX_LINE_LENGTH 100

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

    strcpy(line, temp);
}

void main() {
    char line[MAX_LINE_LENGTH];

    writeLine(line);
    reverseLine(line);
    printLine(line);
}