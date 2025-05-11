#include <iostream>
#include <vector>

using namespace std;

int partition(vector<int> &arr, int start, int end) {

  int pivort = arr[end]; // choose the last element as the pivot
  int i = start - 1;     // i is the index of the smaller element

  for (int j = start; j < end; j++) { // j is the index of the current element

    if (arr[j] < pivort) { // if the current element is smaller than the pivot

      i++;                  // increment the index of the smaller element
      swap(arr[i], arr[j]); // swap the current element with the smaller element
    }
  }

  swap((arr[i + 1]), arr[end]); // Swap the pivot with first greater element. It
                                // is the correct position of the pivot element

  return i + 1; // return the index of the pivot element
}

void quick_sort(vector<int> &arr, int start, int end) {

  // Base case
  if (start >= end) {

    return;
  }

  // Recursive case

  int p = partition(arr, start, end); // partition the array. It will return the
                                      // index of the pivot element

  quick_sort(arr, start, p - 1); // sort the left part of the array

  quick_sort(arr, p + 1, end); // sort the right part of the array

  // p is the pivot element position
  // arr[p] is the pivot element
}

int main() {

  vector<int> arr{10, 5, 2, 0, 7, 6, 4};
  int start = 0;
  int end = arr.size() - 1;

  quick_sort(arr, start, end);

  cout << "Sorted array: ";

  for (auto x : arr) {

    cout << x << ", ";
  }

  return 0;
}