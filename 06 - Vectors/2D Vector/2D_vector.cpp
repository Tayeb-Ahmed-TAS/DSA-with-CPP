#include <iostream>
#include <vector>

using namespace std;

int main() {

  // 2D Vector

  vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9, 10}, {11, 12}};

  // Print all elements of the vector

  cout << "The 2D vector is: " << endl;

  for (int i = 0; i < arr.size(); i++) {
    // arr.size() gives the number of rows
    for (int j = 0; j < arr[i].size(); j++) {
      // arr[i].size() gives the number of columns in the ith row
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  // Update the element at 2nd row and 3rd column

  arr[1][2] += 10;

  cout << "The updated 2D vector is: " << endl;

  // Print all elements of the vector using for each loop

  for (auto row : arr) {
    for (auto col : row) {
      cout << col << " ";
    }
    cout << endl;
  }

  // Add a new row to the 2D vector

  arr.push_back({13, 14, 69});

  cout << "The 2D vector after adding a new row is: " << endl;

  // Print all elements of the vector using range based for loop

  for (int i = 0; i < arr.size(); i++) {
    for (int number : arr[i]) {
      cout << number << " ";
    }
    cout << endl;
  }

  return 0;
}