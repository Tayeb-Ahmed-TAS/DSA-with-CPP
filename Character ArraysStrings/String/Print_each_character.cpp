// Print each character of a string like array
// Hello
// Output:
// H, e, l, l, o

#include <iostream>
#include <string>

using namespace std;

int main() {

  string s = "HABHIT";

  for (char x : s) {
    cout << x << ", ";
  }

  return 0;
}