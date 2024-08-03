#include <iostream>

using namespace std;

int main() {

  char paragraph[1000];

  cin.getline(paragraph, 1000, '.'); // paragraph is the name of the array and
                                     // 1000 is the size of the array
                                     // '.' is the delimiter. The input will
                                     // stop when the delimiter is encountered.
                                     // We can use anything as a delimiter.
  cout << paragraph << endl;

  return 0;
}