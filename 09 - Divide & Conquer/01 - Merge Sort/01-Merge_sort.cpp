#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> &arr, int start, int end) {
  int i = start; // Starting index of the left subarray
  int mid = (start + end) / 2;
  int j = mid + 1; // Starting index of the right subarray

  vector<int> temp;

  while (i <= mid and j <= end) { // While there are elements in both subarrays

    if (arr[i] < arr[j]) { // if the element in the left subarray is smaller
                           // than the right subarray

      temp.push_back(arr[i]);
      i++;
    } else {

      temp.push_back(arr[j]);
      j++;
    }
  }

  // If there are any elements left in the left subarray, add them to temp

  while (i <= mid) {

    temp.push_back(arr[i++]);
  }

  // Or, If there are any elements left in the right subarray, add them to temp

  while (j <= end) {

    temp.push_back(arr[j++]);
  }

  // Copy the elements from temp array to the original array

  int k = 0; // index for temp array

  for (int index = start; index <= end; index++) {

    arr[index] = temp[k++];
  }

  return;
}

void merge_sort(vector<int> &arr, int start, int end) {
  // Base Case

  if (start >= end) { // if the array has 0 or 1 element, it is already sorted

    return;
  }

  // Recursive Case

  int mid = (start + end) / 2;
  merge_sort(arr, start, mid);   // sort the left half (start to mid)
  merge_sort(arr, mid + 1, end); // sort the right half (mid+1 to end)

  return merge(arr, start, end); // merge (Combine) the two halves
}

int main() {

  vector<int> arr{10, 5, 2, 0, 7, 6, 4};

  int start = 0;
  int end = arr.size() - 1;

  merge_sort(arr, start, end);

  cout << "Sorted array: " << endl;

  for (int x : arr) {
    cout << x << ", ";
  }

  cout << endl;

  return 0;
}