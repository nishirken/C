#include <stdio.h>

#define NEW_LINE 10
#define TAB 9
#define SPACE 32
#define ESC 27
#define TRUE 1
#define FALSE 0
#define MAX_LINE_LENGTH 1000

void printLine(const char line[]) {
    printf("%s\n", line);
}

void writeLine(char line[]) {
    int prevSpace = FALSE;
    int i = 0;
    char c = 0;

    while ((c = getchar()) != ESC) {
        line[i] = c;
        ++i;
    }
}

void removeExtraSpaces(const char from[], char to[]) {
    int i = 0;
    char currentSymbol = 0;
    int prevSpace = FALSE;

    while (from[i] != '\0') {
        currentSymbol = from[i];
        if (currentSymbol == TAB) {
            currentSymbol = SPACE;
        }
        /*if (currentSymbol == SPACE) {
            printf("space\n");
            *//*if (!prevSpace) {
                to[i] = currentSymbol;
            }*//*
            prevSpace = TRUE;
        } else {
            to[i] = currentSymbol;
            prevSpace = FALSE;
        }*/
        if (currentSymbol != SPACE) {
            printf("not space, currentSymbol: %c\n", currentSymbol);
            to[i] = currentSymbol;
        }
        ++i;
    }
    to[i] = '\0';
}

void printTrimmedString() {
    char line[10] = {'h','e',TAB,TAB,'1','g',SPACE,SPACE,'q','\0'};

    /*writeLine(line);*/
    char removedSpaceLine[MAX_LINE_LENGTH];
    removeExtraSpaces(line, removedSpaceLine);
    printLine(removedSpaceLine);
}

void main() {
    printTrimmedString();
}