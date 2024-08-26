#include <iostream>

using namespace std;

int main() {

  char arr[1000];

  char temp = cin.get();

  int len = 0;

  // The loop will run until the user presses the enter key
  while (temp != '\n') {
    len++;
    cout << temp;
    temp = cin.get();
  }

  cout << endl << "Length: " << len << endl;

  return 0;
}