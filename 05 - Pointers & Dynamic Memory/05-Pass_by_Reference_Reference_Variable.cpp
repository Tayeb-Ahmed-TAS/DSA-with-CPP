// Pass by Reference - Reference Variable

#include <iostream>

using namespace std;

// Pass by Reference using Reference Variable
void applyTax(int &income) {
  float tax = 0.10; // 10% tax
  income = income - (income * tax);
}

int main() {

  int income;

  cout << "Enter your Income: ";
  cin >> income;

  applyTax(income);

  cout << "Income after Tax Deduction: " << income << endl;

  return 0;
}