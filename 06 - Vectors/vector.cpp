#include <iostream>
#include <vector>

using namespace std;

int main() {

  vector<int> arr = {1, 2, 10, 12, 15}; // Initialize integer vector

  // Push_back() function to add elements to the vector
  arr.push_back(16);

  // Size of vector (number of elements)
  cout << "Size: " << arr.size() << endl;

  // Capacity of vector (number of elements that can be stored)
  cout << "Capacity: " << arr.capacity() << endl;

  // pop_back() function to remove elements from the vector
  arr.pop_back(); // Removes the last element (16)

  // Print all elements of the vector
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }

  cout << endl;

  // FIll constructor to fill the vector with a specific value

  vector<int> arr2(10, 7); // Creates a vector of size 10 with all elements as 7

  for (int i = 0; i < arr2.size(); i++) {
    cout << arr2[i] << " ";
  }

  return 0;
}