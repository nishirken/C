#include <stdio.h>

#define IN 1
#define OUT 0
#define NEW_LINE 10
#define TAB 9
#define SPACE 32
#define BACK_SPACE 8
#define BACK_SLASH 92

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

void main() {
    countWords();
}