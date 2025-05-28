#include <iostream>

using namespace std;

void findSubsets(char *input, char *output, int i, int j) {

  // Base Case
  if (input[i] == '\0') { // If we reach the end of the input string

    output[j] = '\0';
    if (output[0] == '\0') { // If output is empty, print "NULL"

      cout << "NULL" << endl;
    }
    cout << output << endl;
    return;
  }

  // Rec Case
  // Include the current character in the output
  output[j] = input[i];
  findSubsets(input, output, i + 1, j + 1);

  // Exclude the current character from the output
  // Rewrite
  findSubsets(input, output, i + 1, j);
}

int main() {

  char input[100];
  char output[100];
  cin >> input;

  int i = 0; // index for input
  int j = 0; // index for output

  findSubsets(input, output, i, j);

  return 0;
}