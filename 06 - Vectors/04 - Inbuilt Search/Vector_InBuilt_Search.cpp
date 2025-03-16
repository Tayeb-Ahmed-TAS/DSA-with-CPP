#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {

  vector<int> arr = {10, 11, 2, 3, 4, 6, 7, 8};

  int item;

  cout << "Enter the item you want to search: ";
  cin >> item;

  vector<int>::iterator it = find(arr.begin(), arr.end(), item);

  int index = it - arr.begin(); // Gives the index of the item
  // it is the address of the item in the vector and arr.begin() is the address
  // of the first element of the vector

  cout << index << endl;

  if (it != arr.end()) {
    cout << "Item found at index: " << index << endl;
  } else {
    cout << "Item not found" << endl;
  }

  // or

  // (index == arr.size()) ? cout << "Element not found"
  //                       : cout << "Element found at index " << index;

  return 0;
}

// Note:
// arr.begin() is 10
// arr.end() is next to 8