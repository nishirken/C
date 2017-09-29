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

void writeNextLine(char line[], const char* title) {
    int i = 0;
    int c = 0;

    printf("%s\n", title);

    while ((c = getchar()) != NEW_LINE) {
        line[i] = c;
        i++;
    }
}
