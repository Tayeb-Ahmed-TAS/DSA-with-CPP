#include <iostream>

using namespace std;

int **create2DArray(int rows, int cols) {
  int **arr = new int *[rows];

  // Allocate memory for each row

  for (int i = 0; i < rows; i++) {
    arr[i] = new int[cols];
  }

  // Initializing the array

  cout << "Enter the elements: " << endl;

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      cout << "arr[" << i << "][" << j << "] : ";
      cin >> arr[i][j];
    }
  }

  return arr;
}

int main() {

  int rows, cols;

  cout << "Enter the number of rows: ";
  cin >> rows;

  cout << "Enter the number of columns ";
  cin >> cols;

  // Create a 2D dynamic array with the specified number of rows and columns and
  // initialize it

  int **arr = create2DArray(rows, cols);

  // Display the 2D array

  cout << endl;
  cout << "2D array: " << endl;

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      cout << arr[i][j] << "\t";
    }
    cout << endl;
  }

  return 0;
}