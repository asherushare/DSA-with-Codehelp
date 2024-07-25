#include <bits/stdc++.h>
using namespace std;

// rectangle

int main() {

  int num;
  cout << "Number: ";
  cin >> num;

  for(int i = 0; i < num; i++) {
    for(int j = 0; j < num + 2 + 1; j++) {
      cout << "* ";
    }
    cout << endl;
  }

  return 0;
}