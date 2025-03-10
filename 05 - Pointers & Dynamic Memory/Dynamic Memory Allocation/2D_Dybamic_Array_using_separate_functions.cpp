#include <iostream>

using namespace std;

void take_input(int **arr, int rows, int cols) {
  cout << "Enter the elements: " << endl;

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      cout << "arr[" << i << "][" << j << "] : ";
      cin >> arr[i][j];
    }
  }

  return;
}

int **create2DArray(int rows, int cols) {
  int **arr = new int *[rows];

  // Allocate memory for each row

  for (int i = 0; i < rows; i++) {
    arr[i] = new int[cols];
  }

  return arr;
}

void display(int **arr, int rows, int cols) {

  cout << endl;
  cout << "2D array: " << endl;

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      cout << arr[i][j] << "\t";
    }
    cout << endl;
  }

  return;
}

int main() {

  int rows, cols;

  cout << "Enter the number of rows: ";
  cin >> rows;

  cout << "Enter the number of columns ";
  cin >> cols;

  // Create a 2D dynamic array with the specified number of rows and columns

  int **arr = create2DArray(rows, cols);

  // Initializing the array

  take_input(arr, rows, cols);

  // Display the 2D array

  display(arr, rows, cols);

  return 0;
}