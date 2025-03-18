#include <iostream>

using namespace std;

void Spiral_Print(int arr[][10], int row, int col) {
  // 4 variables
  int startRow = 0;
  int endRow = row - 1; // 3
  int startCol = 0;
  int endCol = col - 1; // 3

  // Outer Loop (Traverse array boundary)
  while (startCol <= endCol and startRow <= endRow) {
    // Start Row
    for (int col = startCol; col <= endCol; col++) {
      cout << arr[startRow][col] << " ";
    }

    // End Column
    for (row = startRow + 1; row <= endRow; row++) {
      cout << arr[row][endCol] << " ";
    }

    // End Row
    for (int col = endCol - 1; col >= startCol; col--) {
      // Avoiding Duplicate Printing of Elements

      if (startRow == endRow) {
        break;
      }

      cout << arr[endRow][col] << " ";
    }

    // Start Column
    for (int row = endRow - 1; row >= startRow + 1; row--) {
      // Avoiding Duplicate Printing of Elements
      if (startCol == endCol) {
        break;
      }

      cout << arr[row][startCol] << " ";
    }

    // Updating the variables to print the inner spiral

    startRow++;
    endRow--;
    startCol++;
    endCol--;
  }
}

int main() {

  int arr[][10] = {
      {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

  int row = 4, col = 4;

  // Print the original array

  cout << "Original Array: " << endl;

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      cout << arr[i][j] << "\t";
    }
    cout << endl;
  }

  cout << endl << "Spiral Print: " << endl;

  Spiral_Print(arr, row, col);

  return 0;
}