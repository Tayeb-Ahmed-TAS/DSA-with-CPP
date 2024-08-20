#include <iostream>

using namespace std;

// Passed by reference
// When we passing a 2D array to a function, the passing of the number of row is
// optional but we must have to specify the number of columns in the array.
void display(int arr[][100], int row, int col) {
  cout << endl << "The elements in the 2D array are: " << endl;

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}

int main() {

  int arr[100][100]; // 2D array of size 100x100

  int row, col;

  cout << "Enter the number of rows: ";
  cin >> row;

  cout << "Enter the number of columns: ";
  cin >> col;

  // Taking input from the user

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      cout << "Enter the element at [" << i << "] [" << j << "]: ";
      cin >> arr[i][j];
    }
  }

  // Displaying the elements of the 2D array

  display(arr, row, col);

  return 0;
}