#include <bits/stdc++.h>
using namespace std;

int main() {

  int row;
  int col;

  cout << "Enter row number: ";
  cin >> row;
  cout << "Enter column number: ";
  cin >> col;

  for(int i = 0; i < row; i++) {
    for(int j = 0; j < row - i; j++) {
      cout << "*";
    }
    cout << endl;
  }

  return 0;
}