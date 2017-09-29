#include <stdio.h>
#include <limits.h>
#include <math.h>
#include <float.h>

void printCalculatedTypes() {
    printf("Size of types, defined: \n");
    printf("The signed char size: -%.2f, %.2f\n", pow(2, sizeof(char) * 8) / 2, pow(2, sizeof(char) * 8) / 2 - 1);
    printf("The unsigned char size: %d, %.2f\n", 0, pow(2, sizeof(char) * 8) - 1);
}

void main() {
    printCalculatedTypes();
}