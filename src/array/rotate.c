#include <math.h>
#include <stdio.h>
#include "../pointers/utils.h"
#include "./utils.h"

void gcd(int* a, int b) {
  int r;  // remainder
  while (b > 0) {
    r = *a % b;
    *a = b;
    b = r;
  }
}

void rotate(int* nums, int numsSize, int k) {
  int* kPointer = nums + numsSize - k - 1;
  int* kPointer2 = kPointer;
  int* top = nums + numsSize - 1;

  while (kPointer++ != top) {
    swap(nums, kPointer);
    nums++;
  }
  int temp;
  int j;
  int d = -1;
  int i = 0;
  int* numberOfSets = &numsSize;
  int n = numsSize - k;
  int* rest = nums;
  gcd(numberOfSets, k);

  while (i++ < *numberOfSets) {
    temp = *nums;
    j = i;
    while (1) {
      d = (j + k) % n;
      if (d == i) {
        break;
      }
      nums[j] = nums[d];
      j = d;
    }
    nums[j] = temp;
  }
}

void main() {
  int nums[7] = {1, 2, 3, 4, 5, 6, 7};

  rotate(nums, 7, 3);
  printList(nums, 7);
}
