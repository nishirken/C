#include <stdio.h>

int getLine(char *s, int lim)
{
    int c, i;
    char *s2 = s;

    while ((c=getchar()) != EOF && c != '\n') {
        *s++ = c;
    }
    if (c == '\n') {
        *s++ = c;
    }
    *s = '\0';
    return s - s2;
}
