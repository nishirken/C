#include <stdio.h>

void main(int argc, char *argv[]) {
    while (--argc > 0) {
        printf(argc > 1 ? "%s " : "%s\n", *(++argv));
    }
}
