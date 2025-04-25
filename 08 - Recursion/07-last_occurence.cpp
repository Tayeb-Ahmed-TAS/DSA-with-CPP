// Write a function to find the last occurence of an element in an array.

#include <iostream>

using namespace std;

int lastOccurence(int arr[], int n, int key) {
  // base case
  if (n == 0) { // if the array is empty

    return -1;
  }

  // rec case

  int subIndex =
      lastOccurence(arr + 1, n - 1, key); // check the rest of the array

  if (subIndex == -1) { // if the function returns -1 for the rest of the array

    if (arr[0] == key) { // if the first element is equal to the target element

      return 0;
    } else { // if the first element is not equal to the target element

      return -1;
    }

  } else { // if the function returns a valid index for the rest of the array,
           // return that index

    return subIndex + 1;
  }
}

int main() {

  int arr[] = {1, 3, 5, 8, 7, 6, 2, 8, 7, 11, 21};
  int n = sizeof(arr) / sizeof(int);

  int key = 7;

  int indx = lastOccurence(arr, n, key);

  (indx == -1)
      ? cout << "Item is Not Found!"
      : cout << "Last Occurence: " << lastOccurence(arr, n, key) << endl;

  return 0;
}