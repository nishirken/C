#include <stdio.h>
#include <string.h>
#include "../pointers/getLine.c"
#include "../boolean.h"

#define MAX_LINE 100

void main(int argc, char *argv[]) {
    char line[MAX_LINE];

    if (argc != 2) {
        printf("Find is empty");
    } else {
        while (getLine(line) > 0) {
            if (strstr(line, argv[1]) != NULL) {
                printf("Found %s in %s\n", argv[1], line);
            } else {
                printf("Not found\n");
            }
        }
    }
}
