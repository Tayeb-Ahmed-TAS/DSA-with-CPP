// Run Length Encoding for String Compression
// if compressed string is bigger than original string, return original string
// Input  : aaabbccddee
// Output : a3b2c2d2e2

// Input - 2  : abcd
// Output - 2 : abcd

// Input - 3  : abbcd
// Output - 3 : ab2cd

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

    output += str[i];
    if (count > 1) {
      output += to_string(count);
    }
  }
  
  return output;
}

int main() {

  string s1 = "aaabbccddee";
  cout << stringCompressed(s1) << endl;

  string s2 = "abcd";
  cout << stringCompressed(s2) << endl;

  string s3 = "abbcd";
  cout << stringCompressed(s3) << endl;

  return 0;
}

// Complexity of this code is Linear
// Time Complexity: O(n)
// Space Complexity: O(1)
// Where n is the length of the input string