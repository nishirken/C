#include "./utils.h"

// inverts in x n bits, starts from p
int invert(int x, int p, int n) {
    return ((~0 << 32 - (p + n)) ^ (~0 << 32 - p)) ^ x;
}

void main() {
    // printbits(32333);
    // printbits(invert(32333, 2, 4));
}
