#include "./utils.h"

unsigned getbits(unsigned x, int p, int n) {
    return (x >> (p + 1 - n)) & ~(~0 << n);
}

void main() {
    // printbits(getbits(32232, 15, 14));
}
