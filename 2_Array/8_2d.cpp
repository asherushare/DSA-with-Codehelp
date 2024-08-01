#include <bits/stdc++.h>
using namespace std;

int main() {

  // declaring 2D array
  // int arr[4][3];

  //initializing

  int arr[3][3] = {{23, 32, 3}, {233, 3, 9}, {4, 3, }};

  // cout << arr[0][0] << endl;

  // traversal

  int rows = 3;
  int cols = 3;

  //Row-wise
  cout << endl;
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      cout << arr[i][j] << " "
      ;
    }
    cout << endl;
  }


  // column wise
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      cout << arr[j][i] << " ";
    }
    cout << endl;
  }

  //Diagonal wise

  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      if(arr[i] == arr[j]) {
        cout << arr[i][j] << " ";
      }
    }
  }

  cout << endl;

  //diagonal wise optimize approach

  for(int i = 0; i < 3; i++) {
    cout << arr[i][i] << " ";
  }

  cout << endl;

  //mirror diagonal

  return 0;
}