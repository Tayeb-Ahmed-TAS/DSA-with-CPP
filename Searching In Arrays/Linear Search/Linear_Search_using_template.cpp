#include <iostream>

using namespace std;

template <class t>

t linear_search(t arr[], int n, t key) {
  for (int i = 0; i < n; i++) {
    // Check if current element matches with the key
    if (arr[i] == key) {
      return i;
    }
  }

  // If key is not found in the array
  return -1;
}

int main() {

  char arr[] = {'l', 'o', 'v', 'e', 'u', 't', 'a', 's', 'k', 'i', 'n'};

  int n = sizeof(arr) / sizeof(char);

  char key;

  cout << "Enter the character to be searched: ";
  cin >> key;

  int index = linear_search(arr, n, key);

  if (index != -1) {
    cout << key << " is present at index " << index << endl;
  } else {
    cout << key << " is NOT Found !" << endl;
  }

  return 0;
}