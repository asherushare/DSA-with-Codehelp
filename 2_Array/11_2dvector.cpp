#include <bits/stdc++.h>
using namespace std;

bool searchEle(vector<vector<int>> arr, int target) {
  int rSize = arr.size();
  int cSize = arr[0].size();

  for(int i = 0; i < rSize; i++) {
    for(int j = 0; j < cSize; j++) {
      if(arr[i][j] == target) {
        return true;
      }
    }
  }
  return false;
}

int minValue(int arr[][3], int row, int col) {
  int minvalue = INT_MAX;
  for(int i = 0; i < row; i++) {
    for(int j = 0; j < col; j++) {
      if(arr[i][j] < minvalue) {
        minvalue = min(arr[i][j], minvalue);
      }
    }
  }
  return minvalue;
}

int main() {

  // vector<vector<int>> arr(4, vector<int>(3, 12));
  int arr[4][3];

  // int rowSize = arr.size();
  // int colSize = arr[0].size();

  int rowSize = 4;
  int colSize = 3;

  for(int i = 0; i < rowSize; i++) {
    for(int j = 0; j < colSize; j++) {
      cin >> arr[i][j];
    }
  }

  int target = 30;

  // bool ans = searchEle(arr, target);

  // if(ans == 1) {
  //   cout << "Present" << endl;
  // }
  // else {
  //   cout << "Not Found" << endl;
  // }

  int ans = minValue(arr, rowSize, colSize);
  cout << ans << endl;

  return 0;
}