#include <iostream>
#include <string>

using namespace std;

int main() {

  string s; // Dynamic Array

  // Initialize string

  string s1 = "Hello world";
  cout << s1 << endl;

  // Initialize string another method

  string s2("Hello World!");
  cout << s2 << endl;

  // Taking input

  cout << "Enter a string: ";

  getline(cin, s);
  cout << s << endl;

  // Terminated with '.' character

  cout << "Enter a string: " << endl;

  getline(cin, s, '.');
  cout << s << endl;

  return 0;
}