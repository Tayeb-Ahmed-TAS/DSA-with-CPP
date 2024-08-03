#include <iostream>

using namespace std;

int main() {

  char sentense[1000];

  cin.getline(sentense, 1000); // sentense is the name of the array and 1000 is
                               // the size of the array

  cout << sentense << endl;

  return 0;
}

// Note: In this way, we can read a line of text from the user. Once the user
// presses enter, the input will stop. That means, We can only read a single
// line of text using this program. For reading multiple lines of text, see
// "cin_getline_multiple_lines.cpp" in the same directory.