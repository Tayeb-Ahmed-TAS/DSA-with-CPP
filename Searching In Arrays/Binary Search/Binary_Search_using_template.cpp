#include <iostream>

using namespace std;

template <class t>

t binary_search(t arr[], int n, t item) {
  int Beg = 0;
  int End = n - 1;

  while (Beg <= End) {
    int mid = (Beg + End) / 2;

    if (arr[mid] == item) {
      return mid;
    } else if (arr[mid] > item) {
      End = mid - 1;
    } else {
      Beg = mid + 1;
    }
  }

  return -1;
}

int main() {

  // The array must be sorted
  int arr[] = {10, 20, 30, 40, 45, 60, 70, 77, 89, 91};

  int n = sizeof(arr) / sizeof(int);

  int item;

  cout << "Enter the item to be searched: ";
  cin >> item;

  int index = binary_search(arr, n, item);

  if (index != -1) {
    cout << item << " is present at index " << index << endl;
  } else {
    cout << item << " is NOT Found !" << endl;
  }

  return 0;
}