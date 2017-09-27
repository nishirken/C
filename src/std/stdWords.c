#include <stdio.h>

#define IN 1
#define OUT 0
#define NEW_LINE 10
#define TAB 9
#define SPACE 32
#define BACK_SPACE 8
#define BACK_SLASH 92
#define BLACK_RECTANGLE_CODE 61

int endOfFile(int value) {
    return value == EOF;
}

void countWords() {
    int c = 0;
    int wordCount = 0;
    int state = OUT;

    while (!endOfFile(c = getchar()) && c != NEW_LINE) {
        if (c == SPACE || c == TAB) {
            state = OUT;
        } else if (state == OUT) {
            state = IN;
            ++wordCount;
        }
    }
    printf("Word count: %d\n", wordCount);
}

void newLineWords() {
    int c = 0;

    while (!endOfFile(c = getchar()) && c != NEW_LINE) {
        if (c == SPACE || c == TAB) {
            putchar('\n');
        }
        putchar(c);
    }
    putchar('\n');
}

void countSymbols() {
    int c = 0;
    int numberCounts[10];
    int tabsCount = 0;
    int spacesCount = 0;

    for (int i = 0; i < 10; ++i) {
        numberCounts[i] = 0;
    }

    while (!endOfFile(c = getchar()) && c != NEW_LINE) {
        if (c == SPACE) {
            ++spacesCount;
        } else if (c == TAB) {
            ++tabsCount;
        } else if (c >= '0' && c <= '9') {
            ++numberCounts[c - '0'];
        }
    }
    printf("numberCounts: ");
    for (int i = 0; i < 10; ++i) {
        printf("%d,", numberCounts[i]);
    }
    printf("\n");
    printf("Spaces: %d\n", spacesCount);
    printf("Tabs: %d\n", tabsCount);
}

void createSymbolCountChartBars() {
    int c = 0;
    int symbolCounts[300];
    char line[300];

    for (int i = 0; i < 300; ++i) {
        symbolCounts[i] = 0;
    }

    int j;
    for (j = 0; j < 300 - 1 && (!endOfFile(c = getchar())) && c != NEW_LINE; ++j) {
        ++symbolCounts[c - '0'];
        line[j] = c;
    }
    if (c == NEW_LINE) {
        line[j] = c;
        ++j;
    }
    line[j] = '\0';

    int k = 0;
    char prevSymbol;
    while (line[k] != '\0' && line[k] != NEW_LINE) {
        if (line[k] != prevSymbol) {
            prevSymbol = line[k];
            printf("Symbol: %c ", line[k]);

            for (int i = 0; i < symbolCounts[line[k] - '0']; ++i) {
                printf("%c", BLACK_RECTANGLE_CODE);
            }
            putchar(NEW_LINE);
        }
        ++k;
    }
    putchar(NEW_LINE);
}

void main() {
    /*countWords();*/
    /*newLineWords();*/
    /*countSymbols();*/
    createSymbolCountChartBars();
}