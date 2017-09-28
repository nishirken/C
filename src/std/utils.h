#include "chars.h"

void writeLine(char line[]) {
    int i = 0;
    char c = 0;

    while ((c = getchar()) != ESC) {
        line[i] = c;
        ++i;
    }
}

void printLine(const char line[]) {
    printf("%s\n", line);
}
