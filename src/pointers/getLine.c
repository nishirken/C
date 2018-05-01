#include <stdio.h>

char* getLine(char *s)
{
    int c, i = 0;

    while ((c=getchar()) != EOF && c != '\n') {
        *s++ = c;
        i++;
    }
    if (c == '\n') {
        *s++ = c;
        i++;
    }
    *s = '\0';
    i++;
    return s - i;
}
