#include <stdio.h>

void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

char* reverseString(char* s) {
    int length = 0;
    char* tmp = s;

    while (*s++ != '\0') {
        length++;
    }
    char* top = tmp + length - 1;

    while (tmp != top) {
        swap(tmp, top);

        tmp++;
        top--;
    }

    return tmp;
}

void main() {
    char* str = "hello";
    printf("%s\n", reverseString(str));
}
