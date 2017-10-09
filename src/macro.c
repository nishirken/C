#include <stdio.h>
#define swap(type, a, b) { type temp = a; a = b; b = temp; }

void main() {
    int i = 1;
    int j = 2;
    swap(int, i, j);
    printf("%d\n", i);
    printf("%d\n", j);
}