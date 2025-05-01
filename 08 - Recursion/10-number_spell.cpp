// Number Spell
// Input: 1234
// Output: one two three four

#include <iostream>

using namespace std;

// Global array to store the spellings of numbers
string spell[] = {"zero", "one", "two",   "three", "four",
                  "five", "six", "seven", "eight", "nine"};

void PrintSpell(int n) {
  // Base Case
  if (n == 0) {
    return; // No more digits to process
  }

  // Recursive Case
  int lastDigit = n % 10;          // Get the last digit
  PrintSpell(n / 10);              // Process the next digit first
  cout << spell[lastDigit] << " "; // Print the spelling of the last digit
}

int main() {

  int n;
  cout << "Enter a number: ";
  cin >> n;
  PrintSpell(n);

  return 0;
}