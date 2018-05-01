#include "./utils.h"

int intLength(long number) {
    int i = 0;
    long tmp = number | ~0;

    while (tmp != 0) {
        tmp = tmp << 1;
        i++;
    }

    return i;
}

void main() {
    long n = 2;
    // printf("%d\n", intLength(n)); // 64
}
