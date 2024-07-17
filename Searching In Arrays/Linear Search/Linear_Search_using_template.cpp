#include <iostream>

using namespace std;

template <class t>

t linear_search(t arr[], int n, t item) {
  for (int i = 0; i < n; i++) {
    // Check if current element matches with the item
    if (arr[i] == item) {
      return i;
    }
  }

  // If item is not found in the array
  return -1;
}

int main() {

  char arr[] = {'l', 'o', 'v', 'e', 'u', 't', 'a', 's', 'k', 'i', 'n'};

  int n = sizeof(arr) / sizeof(char);

  char item;

  cout << "Enter the character to be searched: ";
  cin >> item;

  int index = linear_search(arr, n, item);

  if (index != -1) {
    cout << item << " is present at index " << index << endl;
  } else {
    cout << item << " is NOT Found !" << endl;
  }

  return 0;
}