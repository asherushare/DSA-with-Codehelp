#include <bits/stdc++.h>
using namespace std;

bool search2Darray(int arr[][4], int rowSize, int colSize, int target) {
  for(int i = 0; i < rowSize; i++) {
    for(int j = 0; j < colSize; j++) {
      if(arr[i][j] == target) {
        return true;
      }
    }
  }
  return false;
}

int main() {

  int arr[3][4] = {
    {10, 11, 12, 12},
    {20, 21, 22, 23},
    {31, 32, 33, 34}
  };

  int rowSize = 3;
  int colSize = 4;
  int target = 239;

  int result = search2Darray(arr, rowSize, colSize, target);

  if(result == true) {
    cout << "Element is present in the array";
  }
  else {
    cout << "not present in the array";
  }

  return 0;
}