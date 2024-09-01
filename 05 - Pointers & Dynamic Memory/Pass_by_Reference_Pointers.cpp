// Pass by Reference - Pointers

#include <iostream>

using namespace std;

void watchVideo(int *viewsPtr) {
  // watch video should increment view count by 1

  *viewsPtr = *viewsPtr + 1;
}

int main() {

  int views = 100;

  watchVideo(&views);

  cout << "Views: " << views << endl; // 101

  return 0;
}

// The concept is the same as the previous example (Pass by Reference -
// Reference Variable), but here we are using pointers to pass the reference of
// the variable to the function. The function then increments the value of the
// variable by 1. The output will be 101.