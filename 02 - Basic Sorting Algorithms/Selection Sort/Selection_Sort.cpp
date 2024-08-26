// Selection Sort: Increasing Order (Ascending Order)

#include <iostream>

using namespace std;

void Selection_Sort(int arr[], int n) {
  for (int pos = 0; pos < n - 1; pos++) {
    // We continue the loop till n-2 (<n-1) because the last element (n-1) will be
    // automatically sorted

    int min_position = pos;

    // Find out the minimum element
    for (int j = pos; j < n; j++) {
      if (arr[j] < arr[min_position]) {
        min_position = j;
      }
    }
    swap(arr[pos], arr[min_position]);
  }
}

int main() {

  int arr[] = {3, 5, 2, 13, 12};
  int n = sizeof(arr) / sizeof(int);

  Selection_Sort(arr, n);

  cout << "Sorted array is: " << endl;

  for (auto x : arr) {
    cout << x << " ";
  }

  return 0;
}

// Input Array (There will be total n-1 passes. 5-1 = 4 in this case!)
//  00  01  02  03  04   ---> Index
// |03, 05, 02, 13, 12   ---> Elements

// After first pass
//  00  01  02  03  04   ---> Index
//  02,|05, 03, 13, 12   ---> Elements

// After second pass
// 00  01  02  03  04   ---> Index
// 02, 03,|05, 13, 12   ---> Elements

// After third pass
// 00  01  02  03  04   ---> Index
// 02, 03, 05,|13, 12   ---> Elements

// After fourth pass
// 00  01  02  03  04   ---> Index
// 02, 03, 05, 12,|13   ---> Elements