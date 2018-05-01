#include "./utils.h"

int rightRot(int n, int b) {
    int tmp = n;

    while (b--) {
        tmp = tmp >> 1;
    }
    return tmp;
}

void main() {
    // printbits(rightRot(42, 4));
}
