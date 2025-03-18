// Given a sentence, count the number of alphabets, digits, spaces & Symbols in
// it.

#include <iostream>

using namespace std;

int main() {

  char ch;

  ch = cin.get();

  int alphabets = 0, digits = 0, spaces = 0, symbols = 0;

  while (ch != '\n') {

    if ((ch >= 'a' and ch <= 'z') or (ch >= 'A' and ch <= 'Z')) {
      alphabets++;
    } else if (ch >= '0' and ch <= '9') {
      digits++;
    } else if (ch == ' ' or ch == '\t') {
      spaces++;
    } else {
      symbols++;
    }

    ch = cin.get();
  }

  cout << "Alphabets: " << alphabets << endl
       << "Digits: " << digits << endl
       << "Spaces: " << spaces << endl
       << "Symbols: " << symbols << endl;

  return 0;
}