#include <iostream>

using namespace std;

int main() {

  char arr[1000];

  char temp = cin.get();

  int len = 0;

  while (temp != '\n') {
    arr[len++] = temp;
    temp = cin.get();
  }

  arr[len] = '\0';

  cout << arr << endl;

  cout << "Length: " << len << endl;

  return 0;
}