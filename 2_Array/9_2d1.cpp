#include <bits/stdc++.h>
using namespace std;

int main()
{

  int arr[3][3] = {{2, 3, 4}, {54, 3, 6}, {6, 5, 44}};
  int rows = 3;
  int cols = 3;

  // Print the array
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  cout << endl;

  // Print the mirror diagonal elements
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      if (i + j == cols - 1)
      {
        cout << arr[i][j] << " ";
      }
    }
  }

  return 0;
}
