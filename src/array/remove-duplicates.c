#include <stdlib.h>
#include <stdio.h>
#include "./utils.h"

static int first[3] = {1, 1, 2};
static int second[10] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

int *removeDuplicates(int* nums, int numsSize) {
  int *top = nums + numsSize - 1;
  int *result = nums;
  *result = *nums;
  ++result;

  while (nums++ != top) {
    if (*nums != *(nums - 1)) {
      *result = *nums;
      ++result;
    }
  }
  
  return result;
}

void main() {
  int *res = removeDuplicates(second, 10);
  printList(res, 10);
}
