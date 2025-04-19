// Write a function to find the first occurence of an element in an array.

#include <iostream>

using namespace std;

int firstOccurence(int arr[], int n, int key) {
  // base case
  if (n == 0) {
    return -1;
  }

  // rec case

  if (arr[0] == key) {
    return 0;
  }

  int subIndex = firstOccurence(arr + 1, n - 1, key);

  if (subIndex != -1) {
    return subIndex + 1;
  }

  return -1;
}

int main() {

  int arr[] = {1, 3, 5, 8, 7, 6, 2, 8, 7, 11, 21};
  int n = sizeof(arr) / sizeof(int);

  int key = 7;

  return 0;
}