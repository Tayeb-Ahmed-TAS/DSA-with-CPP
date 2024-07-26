#include <iostream>

using namespace std;

void Insertion_Sort(int arr[], int n) {
  for (int i = 1; i <= n - 1; i++) {
    // i=1 because we assume that the first element is already sorted and i-1
    // can't be less than 0

    int current = arr[i]; // current element to be inserted
    int prev = i - 1;

    // Loop to find the right index where the current element should be inserted
    while (prev >= 0 && arr[prev] > current) {
      arr[prev + 1] = arr[prev];
      prev--;
    }

    arr[prev + 1] = current;
  }
}

int main() {

  int arr[]{12, 54, 65, 7, 23, 9};
  int n = sizeof(arr) / sizeof(int);

  Insertion_Sort(arr, n);

  cout << "Sorted Array: " << endl;

  for (int x : arr) {
    cout << x << " ";
  }

  return 0;
}

// Logic:

//  -1   0    1   2   3   4   5 --> index
//      12,| 54, 65, 07, 23, 09 --> i=1, current=54, prev=0
//      12,| 54, 65, 07, 23, 09 --> 1st pass done (i=1)!

//      12, 54,| 65, 07, 23, 09 --> i=2, current=65, prev=1
//      12, 54,| 65, 07, 23, 09 --> 2nd pass done (i=2)!

//      12, 54, 65,| 07, 23, 09 --> i=3, current=7, prev=2
//      12, 54, 65,| 65, 23, 09 --> i=3, current=7, prev=1
//      12, 54, 54,| 65, 23, 09 --> i=3, current=7, prev=0
//      12, 12, 54,| 65, 23, 09 --> i=3, current=7, prev=-1
//      07, 12, 54,| 65, 23, 09 --> i=3, current=7, prev=-1--> 3rd pass done (i=3)!

// Fast forwarding and 4th and 5th pass will give:
//      07, 12, 54, 65,| 23, 09 --> i=4, current=23, prev=3
//      07, 12, 23, 54,| 65, 09 --> After the 4th pass

//      07, 12, 23, 54, 65,| 09 --> i=5, current=09, prev=4
//      07, 09, 12, 23, 54, 65| --> After the 5th pass