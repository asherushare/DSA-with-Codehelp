#include <bits/stdc++.h>
using namespace std;

// square

int main() {

  int num;
  cout << "Number: ";
  cin >> num;

  for(int i = 1; i <= num; i++) {
    for(int j = 1; j <= num; j++) {
      cout << "*" << " ";
    }
    cout << endl;
  }

  return 0;
}