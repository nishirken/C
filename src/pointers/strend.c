#include <stdio.h>
#include <string.h>

int strend(char *where, char *str) {
    const int strLength = strlen(str);
    const int whereLength = strlen(where);
    
    if (strLength > whereLength) {
        return 0;
    }

    int i = whereLength - strLength;
    
    while (where[i] == *str++) {
        if (where[i] == '\0') {
            return 1;
        }
        i++;
    }
    return 0;
}

void main() {
    char str1[] = "helloworld";
    char str2[] = "world";
    char str3[] = "helloworld";
    char str4[] = "123";
    printf("First result: %d\n", strend(str1, str2));
    printf("Second result: %d\n", strend(str3, str4));
}
