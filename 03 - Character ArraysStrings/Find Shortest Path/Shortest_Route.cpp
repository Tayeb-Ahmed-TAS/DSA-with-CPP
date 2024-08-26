// Find Displacement: Given a long route containing N,S,E,W directions, find the
// shortest path to reach the location(destination)
// Sample Input: SNNNEWE
// Sample Output: NNE

#include <iostream>

using namespace std;

int main() {

  char route[1000];

  cout << "Enter the route: ";
  cin.getline(route, 1000);

  int x = 0;
  int y = 0;

  // For each character in the route, update the x and y coordinates
  for (int i = 0; route[i] != '\0'; i++) {
    switch (route[i]) {
    case 'N':
    case 'n':
      y++;
      break;
    case 'S':
    case 's':
      y--;
      break;
    case 'E':
    case 'e':
      x++;
      break;
    case 'W':
    case 'w':
      x--;
      break;
    }
  }

  cout << "Final Displacement is (x, y): (" << x << ", " << y << ")" << endl;

  cout << "Shortest Path: ";

  // To get the shortest path
  if (x >= 0 and y >= 0) {
    while (y--) {
      cout << "N";
    }
    while (x--) {
      cout << "E";
    }
  } else if (x < 0 and y >= 0) {
    while (y--) {
      cout << "N";
    }
    while (x++) {
      cout << "W";
    }
  } else if (x < 0 and y < 0) {
    while (y++) {
      cout << "S";
    }
    while (x++) {
      cout << "W";
    }
  } else if (x >= 0 and y < 0) {
    while (y++) {
      cout << "S";
    }
    while (x--) {
      cout << "E";
    }
  }

  return 0;
}