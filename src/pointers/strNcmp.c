#include <stdio.h>

int strNcmp(const char *str1, const char *str2, const int limit) {
    int i = 0;

    while (*str1++ == *str2++) {
        if (i == limit - 2) {
            break;
        }
        i++;
        
        if (*str1 == '\0') {
            return 0;
        }
    }
    return *str1 - *str2;
}

void main() {
    const int limit = 4;
    const char str1[] = "hello";
    const char str2[] = "hello";
    const char str3[] = "hel";
    const char str4[] = "hello";
    const char str5[] = "hello";
    const char str6[] = "hel";
    const int result1 = strNcmp(str1, str2, limit);
    const int result2 = strNcmp(str3, str4, limit);
    const int result3 = strNcmp(str5, str6, limit);
    printf("Result first: %d\n", result1);
    printf("Result second: %d\n", result2);
    printf("Result third: %d\n", result3);
}
