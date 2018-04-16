#include <stdio.h>

void printList(int array[]) {
   int loop = 0;
   int size = sizeof(*array) - 1;

   for(loop; loop < size; loop++)
      printf("%d ", array[loop]);
}
