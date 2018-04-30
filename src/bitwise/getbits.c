#include "./utils.h"

unsigned getbits(unsigned x, int p, int n) {
    return (x >> (p + 1 - n)) & ~(~0 << n);
}

unsigned getbitsReversed(unsigned x, int p, int n) {
    return (x >> 32 - (p + n)) & ~(~0 << n);
}

void main() {
    // printbits(32232);
    // printbits(getbits(32232, 15, 14));
    // printbits(32211222);
    // printbits(getbitsReversed(32211222, 9, 5));
}
