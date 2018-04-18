#include <stdio.h>

void printList(int array[], int size) {
  int loop = 0;

  printf("[ ");
  for (loop; loop < size; loop++) {
    printf("%d ", array[loop]);
  }

    printf("]\n");
}
