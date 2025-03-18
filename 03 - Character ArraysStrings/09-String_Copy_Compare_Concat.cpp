#include <cstring>
#include <iostream>

using namespace std;

int main() {

  char a[1000] = "Taskin";
  char b[1000];
  char c[1000] = "Tabassum";

  // Get length of a
  cout << strlen(a) << endl;

  // Copy a to b
  strcpy(b, a);
  // Here, first parameter is destination and second parameter is source
  cout << b << endl; // Taskin

  // Compare
  // strcmp returns 0 if both strings are equal otherwise it returns non-zero
  // value

  cout << strcmp(a, b) << endl; // 0
  cout << strcmp(a, c) << endl; // 1

  // Concatenate

  cout << strcat(a, c) << endl; // TaskinTabassum

  // Both concatination and string copy

  char web[] = "www.";
  char domain[] = "nu.ac.bd";

  strcpy(b, strcat(web, domain));

  cout << b << endl; // www.nu.ac.bd

  // compare a with b

  cout << strcmp(a, b) << endl; // -1

  // compare b wirh a

  cout << strcmp(b, a) << endl; // 1

  return 0;
}