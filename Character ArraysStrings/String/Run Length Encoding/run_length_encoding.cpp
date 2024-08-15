// Run Length Encoding for String Compression
// if compressed string is bigger than original string, return original string
// Input  : aaabbccddee
// Output : a3b2c2d2e2

// Input - 2  : abcd
// Output - 2 : abcd

#include <iostream>
#include <string>

using namespace std;

string stringCompressed(string str) {
  int n = str.length(); // length of string

  string output; // For storing compressed string

  for (int i = 0; i < n; i++) {
    int count = 1; // Initialize count to 1

    while (i < n - 1 and str[i] == str[i + 1]) {
      count++;
      i++;
    }

    output += str[i];           // Here += is for concatenation
    output += to_string(count); // Here += is for concatenation and to_string()
                                // is used to convert integer to string
  }

  if (output.length() > str.length()) {
    return str;
  }
  return output;
}

int main() {

  string s1 = "aaabbccddee";
  cout << stringCompressed(s1) << endl;

  string s2 = "abcd";
  cout << stringCompressed(s2) << endl;

  return 0;
}

// Complexity of this code is Linear
// Time Complexity: O(n)
// Space Complexity: O(1)
// Where n is the length of the input string