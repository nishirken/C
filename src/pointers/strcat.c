#include <stdio.h>

void *strcat(char *to, const char *from) {
    while (*to++);
    // move back for avoid \0 char
    *to--;
    while (*to++ = *from++);
}

void main() {
    char array[1000] = "hello";
    const char array2[] = "world";
    strcat(array, array2);
    printf("%s\n", array);
}
