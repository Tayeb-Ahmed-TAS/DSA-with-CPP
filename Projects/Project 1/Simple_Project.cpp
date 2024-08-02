#include "Simple_Project.h"
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {

  int arr[] = {2, 3, 4, 1, 5, 12, 6, 1, 3};
  int n = sizeof(arr) / sizeof(int);

  User_Selection(arr, n);

  return 0;
}