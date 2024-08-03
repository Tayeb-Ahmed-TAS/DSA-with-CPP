// Find Displacement: Given a long route containing N,S,E,W directions, find the
// shortest path to reach the location(destination)
// Sample Input: SNNNEWE
// Sample Output: NNE

#include <iostream>

using namespace std;

void Shortest_Route(int x, int y) {

  cout << "Shortest Route: ";

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

  return;
}

void Shortest_Route_Axis(char route[]) {
  int x = 0;
  int y = 0;

  for (int i = 0; route[i] != '\0'; i++) {
    if (route[i] == 'N' or route[i] == 'n') {
      y++;
    } else if (route[i] == 'S' or route[i] == 's') {
      y--;
    } else if (route[i] == 'E' or route[i] == 'e') {
      x++;
    } else if (route[i] == 'W' or route[i] == 'w') {
      x--;
    }
  }

  cout << "Final Displacement is (x, y): (" << x << ", " << y << ")" << endl;

  Shortest_Route(x, y);

  return;
}

int main() {

  char route[1000];

  cout << "Enter the route: ";
  
  cin.getline(route, 1000);

  Shortest_Route_Axis(route);

  return 0;
}