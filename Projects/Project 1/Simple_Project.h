// Purpose: Header file for Simple_Project.cpp
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int Brute_Force_Algorithm(int *arr, int n) {
  int cs = 0;
  int ls = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      cs = 0;
      for (int k = i; k <= j; k++) {
        cs += arr[k];
      }
      ls = max(ls, cs);
    }
  }
  return ls;
}

int Prefix_Sum_Algorithm(int *arr, int n) {
  int ls = 0;
  int prefix[n] = {};
  prefix[0] = arr[0];
  for (int i = 1; i < n; i++) {
    prefix[i] = arr[i] + prefix[i - 1];
  }
  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      int cs = 0;
      cs += (i >= 0) ? prefix[j] - prefix[i - 1] : prefix[j];
      ls = max(ls, cs);
    }
  }
  return ls;
}

int Kadanes_Algorithm(int *arr, int n) {
  int ls = 0;
  int cs = 0;
  for (int i = 0; i < n; i++) {
    cs += arr[i];
    if (cs < 0) {
      cs = 0;
    }
    ls = max(ls, cs);
  }
  return ls;
}

void display(int *arr, int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl << endl;
}

void Bubble_Sort(int *arr, int n) {
  cout << "Bubble Sort : " << endl;
  for (int times = 1; times <= n - 1; times++) {
    for (int j = 0; j <= n - times - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
      }
    }
  }

  display(arr, n);
}

void Insertion_Sort(int *arr, int n) {
  cout << "Insertion Sort : " << endl;
  for (int i = 1; i <= n - 1; i++) {
    int current = arr[i];
    int prev = i - 1;
    while (prev >= 0 and arr[prev] > current) {
      arr[prev + 1] = arr[prev];
      prev--;
    }
    arr[prev + 1] = current;
  }

  display(arr, n);
}

void Selection_Sort(int *arr, int n) {
  cout << "Selection Sort : " << endl;
  for (int pos = 0; pos < n - 1; pos++) {
    int min_pos = pos;
    for (int j = pos; j < n; j++) {
      if (arr[min_pos] > arr[j]) {
        min_pos = j;
      }
    }
    swap(arr[min_pos], arr[pos]);
  }
  display(arr, n);
}

void Counting_Sort(int arr[], int n) {
  cout << "Counting Sort : " << endl;
  int largest = -1;
  for (int i = 0; i < n; i++) {
    largest = max(largest, arr[i]);
  }
  vector<int> count(largest + 1, 0);
  for (int i = 0; i < n; i++) {
    count[arr[i]]++;
  }
  int j = 0;
  for (int i = 0; i <= largest; i++) {
    while (count[i] > 0) {
      arr[j] = i;
      count[i]--;
      j++;
    }
  }
  display(arr, n);
}

void In_Built_Sort(int *arr, int n) {
  cout << "In-Built Sort : " << endl;
  sort(arr, arr + n);
  display(arr, n);
}

void User_Sorting_Selection(int *arr, int n) {
  char ch;
  cout << "Enter (b)ubble, (i)nsertion, (s)election, (c)ounting, i(n)-built or "
          "(q)uit: ";
  cin >> ch;
  if (ch == 'b') {
    Bubble_Sort(arr, n);
  } else if (ch == 'i') {
    Insertion_Sort(arr, n);
  } else if (ch == 's') {
    Selection_Sort(arr, n);
  } else if (ch == 'c') {
    Counting_Sort(arr, n);
  } else if (ch == 'n') {
    In_Built_Sort(arr, n);
  } else if (ch == 'q') {
    cout << "Quitting..." << endl;
  } else {
    cout << "Invalid Input" << endl;
  }
}

void User_Sum_Selection(int *arr, int n) {
  char ch;
  cout << "Enter (b)rute-force, (p)refix-sum, (k)adanes or (q)uit: ";
  cin >> ch;
  if (ch == 'b') {
    cout << "Brute-Force : " << Brute_Force_Algorithm(arr, n) << endl << endl;
  } else if (ch == 'p') {
    cout << "Prefix_Sum : " << Prefix_Sum_Algorithm(arr, n) << endl << endl;
  } else if (ch == 'k') {
    cout << "Kadanes : " << Kadanes_Algorithm(arr, n) << endl << endl;
  } else if (ch == 'q') {
    cout << "Quitting..." << endl;
  } else {
    cout << "Invalid Input" << endl;
  }
}

void User_Selection(int *arr, int n) {
  char ch;
  cout << "Enter s(u)m or (s)orting or (q)uit: ";
  cin >> ch;
  if (ch == 'u') {
    User_Sum_Selection(arr, n);
  } else if (ch == 's') {
    User_Sorting_Selection(arr, n);
  } else if (ch == 'q') {
    cout << "Quitting..." << endl;
  } else {
    cout << "Invalid Input" << endl;
  }
}