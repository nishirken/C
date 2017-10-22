#include <stdio.h>

void strNcat(char *to, const char *from, const int limit) {
    while (*to++);
    *to--;

    int i = 0;
    while (*to++ = *from++) {
        if (i == limit - 1) {
            break;
        }
        i++;
    }
    *to = '\0';
}

void main() {
    char str1[] = "hello";
    const char str2[] = "world";
    strNcat(str1, str2, 2);
    printf("Result: %s\n", str1);
}
