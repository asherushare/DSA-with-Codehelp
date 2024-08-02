#include <bits/stdc++.h>
using namespace std;

void transposeMatrix(int arr[][3], int rows, int cols)
{
  int ans[1000][1000] = {0};
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      ans[j][i] = arr[i][j];
    }
  }

  for (int i = 0; i < cols; i++)
  { // Note: should be cols here
    for (int j = 0; j < rows; j++)
    {
      cout << ans[i][j] << " ";
    }
    cout << endl;
  }
}

int main()
{

  int arr[3][3] = {
      {1, 20, 30},
      {40, 50, 60},
      {1, 80, 90}};

  int rowSize = 3;
  int colSize = 3;

  // transposeMatrix(arr, rowSize, colSize);

  for(int i = 0; i < rowSize; i++) {
    for(int j = i; j < colSize; j++) {
      swap(arr[i][j], arr[j][i]);
    }
  }

  for(int i = 0; i < rowSize; i++) {
    for(int j = 0; j < colSize; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
