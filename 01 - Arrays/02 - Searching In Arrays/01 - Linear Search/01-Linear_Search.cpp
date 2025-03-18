#include <iostream>

using namespace std;

int linear_search(int arr[], int n, int item) {
  for (int i = 0; i < n; i++) {
    // Check if current element matches with the item
    if (arr[i] == item) {
      return i;
    }
  }

  // If item is not found in the array

  return -1;
}

int main() {

  int arr[] = {10, 15, 12, 9, 6, 4, 3, 10, 8, 2};

  int n = sizeof(arr) / sizeof(int);

  int item;

  cout << "Enter the item to be searched: ";
  cin >> item;

  int index = linear_search(arr, n, item);

  if (index != -1) {
    cout << item << " is present at index " << index << endl;
  } else {
    cout << item << " is NOT Found !" << endl;
  }

  return 0;
}