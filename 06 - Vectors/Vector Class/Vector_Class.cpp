#include "Vector_Class.h"
#include <iostream>

using namespace std;

int main() {

  Vector v;

  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  v.push_back(4);
  v.push_back(5);

  cout << "Size: " << v.size() << endl;         // 5
  cout << "Capacity: " << v.capacity() << endl; // 8

  v.pop_back();

  cout << "Front Element: " << v.front() << endl; // 1
  cout << "Back Element: " << v.back() << endl;   // 4

  cout << "Element at index 2: " << v.at(2) << endl; // 3

  cout << "Is Empty: " << v.isEmpty() << endl; // 0 (False)

  cout << "All Elements: ";

  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " "; // v[i] is calling the operator overloading function
                         // which returns the element at the ith index

    // cout << v.at(i) << " ";
  }

  return 0;
}