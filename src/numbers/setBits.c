#include <stdio.h>

unsigned setBits(unsigned x, int p, int n, unsigned y) {
    return x << n;
}

void main() {
    unsigned x = 1;
    unsigned y = 2;
    printf("%d\n", setBits(x, 2, 30, y));
}