// Counting Sort: Increasing Order (Ascending Order)

#include <iostream>
#include <vector>

using namespace std;

void Counting_Sort(int *arr, int n) {
  int largest = -1; // Assuming all elements are positive
  //   Find out the largest element in the array so that we get the range

  for (int i = 0; i < n; i++) {
    largest = max(largest, arr[i]);
  }

  // Create a count array/vector. Vector is a Dynamic Array.
  vector<int> count_Array(largest + 1, 0);
  // size of this vector is largest + 1 and initialize all elements as 0.

  // int *count = new int[largest + 1]{0};
  // We can also use this method to create a dynamic array.

  // Update the count array according to the elements present in the input array
  for (int i = 0; i < n; i++) {
    count_Array[arr[i]]++;
  }

  int j = 0; // j is the index for the input array

  for (int i = 0; i <= largest; i++) {
    while (count_Array[i] > 0) {
      arr[j] = i;
      count_Array[i]--;
      j++;
    }
  }
  return;
}

int main() {

  int arr[] = {88, 97, 10, 12, 15, 1, 5, 6, 12, 5, 8};
  int n = sizeof(arr) / sizeof(arr[0]);

  Counting_Sort(arr, n);

  for (auto x : arr) {
    cout << x << " ";
  }

  return 0;
}