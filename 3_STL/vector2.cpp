#include <bits/stdc++.h>
using namespace std;

int main() {

  vector<vector<int>> arr(5, vector<int>(4, 0));
  int totalRows = arr.size();
  int totalcols = arr[0].size();

  vector<vector<int>> newArr(4);

  newArr[0] = vector<int>(3);
  newArr[1] = vector<int>(5);
  newArr[2] = vector<int>(6);
  newArr[3] = vector<int>(12);

  int totalrowCount = newArr.size();
  // int totalcolsCount = newArr[i].size();

  cout << totalRows << endl;
  cout << totalcols << endl;
  cout << totalrowCount << endl;
  // cout << totalcolsCount << endl;

  return 0;
}