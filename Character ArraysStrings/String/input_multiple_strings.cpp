#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

  string s;
  vector<string> str;

  int n = 5;

  cout << "Enter " << n << " strings followed by enter key: " << endl;

  while (n--) {
    getline(cin, s);
    str.push_back(s);
  }

  cout << endl << "Output: " << endl;

  for (string x : str) {
    cout << x << endl;
  }

  return 0;
}