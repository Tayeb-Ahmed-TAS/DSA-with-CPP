// Inbuilt Sort: Increasing Order (Ascending Order) Using Comparator

#include <algorithm>
#include <iostream>

using namespace std;

bool compare(int a, int b) { return a < b; }

int main() {

  int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
  int n = sizeof(arr) / sizeof(int);

  // Sorting in Increasing Order

  sort(arr, arr + n, compare);

  for (auto x : arr) {
    cout << x << " ";
  }

  return 0;
}