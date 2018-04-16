#include <stdio.h>
#include "./utils.h"

static int first[3] = {1, 1, 2};
static int second[10] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

void removeDuplicates(int* nums, int numsSize) {
  int i = 1;
  int prev = *nums;

  while (i != numsSize) {
    if (nums[i] == prev) {
      nums[i] = nums[i + 1];
    }
    prev = *nums;
    nums++;
    i++;
  }
}

void main() {
  removeDuplicates(first, sizeof(first));
  printList(first);
}
