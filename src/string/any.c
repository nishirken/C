#include <stdio.h>
#include <string.h>
#include "utils.h"

int any() {
    printf("Please enter a char for searching in the hello string\n");
    const int searchChar = getchar();
    const char sampleString[] = {'h', 'e', 'l', 'l', 'o', '\0'};

    return searchCharIndex(sampleString, searchChar);
}

void main() {
    int result = any();

    if (result == -1) {
        printf("The index was not found\n");
    } else {
        printf("The founded index is: %d\n", result);
    }
}