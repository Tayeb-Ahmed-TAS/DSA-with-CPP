#include "Vector_Class.h"
#include <iostream>

using namespace std;

int main() {

  // Integer Vector

  Vector<int> v;

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

  cout << endl;

  // Character Vector

  Vector<char> vc;

  vc.push_back('S');
  vc.push_back('H');
  vc.push_back('O');
  vc.push_back('R');
  vc.push_back('N');
  vc.push_back('A');

  cout << "The character vector is: ";

  for (int i = 0; i < vc.size(); i++) {
    cout << vc[i] << " ";
  }

  cout << endl;

  cout << "Size of character vector: " << vc.size() << endl;
  cout << "Capacity of character vector: " << vc.capacity() << endl;

  return 0;
}