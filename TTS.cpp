#include <iostream>

using namespace std;

template <class t>

void printAllPairs(t *arr, int size) {
  for (int i = 1; i < size; i++) {
    for (int j = 0; j < i; j++) {
      cout << arr[j];
    }
    cout << endl;
  }
}

int main() {

  char arr[] = "I Love You Taskin";
  int size = sizeof(arr) / sizeof(arr[0]);
  printAllPairs(arr, size);
  return 0;
}