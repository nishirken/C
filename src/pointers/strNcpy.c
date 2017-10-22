#include <stdio.h>

void strNcpy(char *to, const char *from, const int limit) {
    int i = 0;
    while (*to++ = *from++) {
        if (i == limit - 1) {
            break;
        }
        i++;
    }
}

void main() {
    char str1[1000];
    const char str2[] = "hello";
    const int limit = 4;
    strNcpy(str1, str2, limit);
    printf("Result str: %s\n", str1);
}
