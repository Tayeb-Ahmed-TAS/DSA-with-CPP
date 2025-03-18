#include <iostream>

using namespace std;

// pair is a template class in C++ STL that allows to return two values from a
// function
pair<int, int> stairCaseSearch(int arr[][5], int row, int col, int key) {
  // if the element is not present return {-1, -1}
  if (key < arr[0][0] or key > arr[row - 1][col - 1]) {
    return {-1, -1};
  }

  // Staircase Search

  int i = 0;       // first row
  int j = col - 1; // last column

  // We're starting from the top right corner

  while (i <= row - 1 and j >= 0) {

    if (arr[i][j] == key) {

      return {i, j};

    } else if (arr[i][j] > key) {

      j--; // move left

    } else {

      i++; // move down
    }
  }

  return {-1, -1};
}

int main() {

  // 2D Row & Column wise sorted array
  int arr[][5] = {{10, 20, 30, 40, 50},
                  {15, 25, 35, 45, 55},
                  {27, 29, 37, 48, 57},
                  {32, 33, 39, 50, 60}};

  int row = 4, col = 5;

  int key;
  cout << "Enter the element to be searched: ";
  cin >> key;

  pair<int, int> coordinates = stairCaseSearch(arr, row, col, key);

  if (coordinates.first == -1 and coordinates.second == -1) {
    cout << "Element not found!" << endl;
  } else {
    cout << "Element found at: {" << coordinates.first << ", "
         << coordinates.second << "}" << endl;
  }

  return 0;
}

// Point to be noted: The array should be sorted row and column wise.
// So the smallest element is in {0,0} position and the largest element is in
// {row-1, col-1} position.