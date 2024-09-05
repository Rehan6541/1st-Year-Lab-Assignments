//PROBLEM STATEMENT : C program to implement binary search using iterative & recursive approach

#include <stdio.h>
//Iterative
int binarySearchIterative(int array[], int x, int low, int high) {
  while (low <= high) {
    int mid = low + (high - low) / 2;
    //found at mid
    if (array[mid] == x)
      return mid;
    // Search the right half
    if (array[mid] < x)
      low = mid + 1;
    // Search the left half
    else
      high = mid - 1;
  }

  return -1;
}

//Recursive
int binarySearchRecursive(int array[], int x, int low, int high) {
  if (high >= low) {
    int mid = low + (high - low) / 2;

    //found at mid
    if (array[mid] == x)
      return mid;

    // Search the left half
    if (array[mid] > x)
      return binarySearchRecursive(array, x, low, mid - 1);

    // Search the right half
    return binarySearchRecursive(array, x, mid + 1, high);
  }

  return -1;
}

int main(void) {
  int array[] = {3, 4, 5, 6, 7, 8, 9};
  int n = sizeof(array) / sizeof(array[0]);
  int x = 4;
  int result = binarySearchIterative(array, x, 0, n - 1);
  if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index %d", result);
  return 0;
}

