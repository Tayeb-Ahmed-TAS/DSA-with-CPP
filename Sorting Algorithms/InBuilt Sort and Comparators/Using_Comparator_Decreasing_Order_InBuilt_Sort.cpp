// Inbuilt Sort: Decreasing Order (Descending Order) Using Comparator

#include <algorithm>
#include <iostream>

using namespace std;

bool compare(int a, int b) { return a > b; }

int main() {

  int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
  int n = sizeof(arr) / sizeof(int);

  // Sorting in Descending Order

  sort(arr, arr + n, compare);

  // Here, compare is not a function call, it is a function pointer.
  // We are passing the address of the function compare to the sort function.
  // Inside the sort function, the compare function will be called multiple
  // times to compare the elements.

  for (auto x : arr) {
    cout << x << " ";
  }

  return 0;
}