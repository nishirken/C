#include <stdio.h>
#include <stdlib.h>

#define MAX_LEN 1000

char* getLine() {
    int c;
    char* str = (char *)malloc(MAX_LEN);
    char* init = str;

    while ((c = getchar()) != EOF && c != '\n') {
        *str = c;
        str++;
    }
    *str = '\0';
    return init;
}

void printLines(int n) {
    char** fullStr = (char **)malloc(n);
    char** init = fullStr;
    int c;
    int i = n;
    int j = 0;

    while (i--) {
        *fullStr = getLine();
        fullStr++;
    }

    while (j != n) {
        printf("%s\n", init[j]);
        j++;
    }
}

void main() {
    // printLines(3);
}
