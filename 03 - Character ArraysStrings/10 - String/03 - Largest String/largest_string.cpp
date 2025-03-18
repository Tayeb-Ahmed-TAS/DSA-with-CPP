// Problem: Read N strings and print the largest string. Each string can hevr
// upto 1000 characters.

#include <cstring>
#include <iostream>

using namespace std;

int main() {

  int n;
  cout << "Enter the number of strings: ";
  cin >> n;

  cin.get(); // To consume the extra '\n' character

  char sentence[1000];
  char largest[1000];

  int largest_len = 0;

  while (n--) {
    cin.getline(sentence, 1000);

    int len = strlen(sentence);

    if (len > largest_len) {
      largest_len = len;
      strcpy(largest, sentence);
    }
  }

  cout << "Largest sentence is: " << largest << endl;

  return 0;
}