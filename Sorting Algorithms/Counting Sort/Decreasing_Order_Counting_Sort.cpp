// Counting Sort: Decreasing Order (Descending Order)

#include <algorithm>
#include <iostream>

using namespace std;

void Counting_Sort(int *arr, int n) {
  int largest = -1;

  for (int i = 0; i < n; i++) {
    largest = max(largest, arr[i]);
  }
  //  Create a count array/vector. Here it is not a vector. It's a dynamic
  //  array.
  int *count = new int[largest + 1]{0};

  for (int i = 0; i < n; i++) {
    count[arr[i]]++;
  }

  int j = 0;
  for (int i = 0; i <= largest; i++) {
    while (count[i] > 0) {
      arr[j] = i;
      count[i]--;
      j++;
    }
  }
  reverse(arr, arr + n); // Reverse the array to get the decreasing order.
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