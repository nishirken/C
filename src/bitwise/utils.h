#include <stdio.h>

void printbits(int n) {
    int counter = 32;

    while (counter-- != 0) {
        if (n & 1 << counter) {
            printf("1");
        } else {
            printf("0");
        }
    }
    printf("\n");
}
