#include <bits/stdc++.h>
using namespace std;

void rowSum(int arr[][3], int row, int col) {
  for(int i = 0; i < row; i++) {
    int sum = 0;
    for(int j = 0; j < col; j++) {
      sum = sum + arr[i][j];
    }
    cout << sum << endl;
  }
}

void colSum(int arr[][3], int rows, int cols) {
  for(int j = 0; j < cols; j++) {
    int sum = 0;
    for(int i = 0; i < rows; i++) {
      sum = sum + arr[i][j];
    }
    cout << sum << endl;
  }
}

// void diagonalSum(int arr[][3], int row, int col) {

//   int sum = 0;
//   for(int i = 0; i < row; i++) {
//     for(int j = 0; j < col; j++) {
//       if(i == j) {
//         sum = sum + arr[j][j];
//       }
//     }
//   }
//   cout << sum << endl;
// }

void diagonalSum(int arr[][3], int row, int col)
{

  int sum = 0;
  for (int i = 0; i < row; i++)
  {
    sum += arr[i][i];
  }
  cout << sum << endl;
}

void mirrorDiagonalSum(int arr[][3], int row, int col) {
  int sum = 0;
  for(int i = 0; i < row; i++) {
    for(int j = 0; j < col; j++) {
      if(i + j == col - 1) {
        sum += arr[i][j];
      }
    } 
  }
  cout << sum << endl;
}

void transMatrix(int arr[][3], int rows, int cols)
{
  int ans[1000][1000] = {0};
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      ans[j][i] = arr[i][j]; // Corrected transpose logic
    }
  }

  for (int i = 0; i < cols; i++)
  { // Note: should be cols here
    for (int j = 0; j < rows; j++)
    { // Note: should be rows here
      cout << ans[i][j] << " ";
    }
    cout << endl;
  }
}

int main() {

  cout << "This is patra" << endl;

  int arr[3][3] = {
    {1, 20, 30},
    {40, 50, 60},
    {1, 80, 90}
  };

  int rowSize = 3;
  int colSize = 3;

  // rowSum(arr, rowSize, colSize);

  // colSum(arr, rowSize, colSize);

  // diagonalSum(arr, rowSize, colSize);

  // mirrorDiagonalSum(arr, rowSize, colSize); 

  transMatrix(arr, rowSize, colSize);

  return 0;
}