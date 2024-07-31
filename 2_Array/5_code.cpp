#include <bits/stdc++.h>
using namespace std;

void printAllPairs(int arr[], int n) {
  // for(int i = 0; i < n; i++) {
  //   for(int j = 0; j < n; j++) {
  //     cout << arr[i] << ", " << arr[j] << endl;
  //   }
  // }



  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = i; j < n; j++)
  //   {
  //     cout << arr[i] << ", " << arr[j] << endl;
  //   }
  // }

  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = 0; j < i; j++)
  //   {
  //     cout << arr[i] << ", " << arr[j] << endl;
  //   }
  // }

  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = 0; j <= i; j++)
  //   {
  //     cout << arr[i] << ", " << arr[j] << endl;
  //   }
  // }

  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = n - 1; j >= 0; j--)
  //   {
  //     cout << arr[i] << ", " << arr[j] << endl;
  //   }
  // }

  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = n - 1; j > i; j--)
  //   {
  //     cout << arr[i] << ", " << arr[j] << endl;
  //   }
  // }

  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = i + 1; j < n; j++)
  //   {
  //     cout << arr[i] << ", " << arr[j] << endl;
  //   }
  // }
}

// bool checkTwoSum(int arr[], int n, int target) {
//   for(int i = 0; i < n; i++) {
//     for(int j = 0; j < n; j++) {
//       if(arr[i] + arr[j] == target) {
//         return true;
//       }
//     }
//   }
//   return false;
// }

pair<int, int> checkTwoSum(int arr[], int n, int target)
{
  pair<int, int> ans = make_pair(-1, -1);
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (arr[i] + arr[j] == target)
      {
        ans.first = arr[i];
        ans.second = arr[j];
        return ans;
      }
    }
  }
  return ans;
}

int main() {

  int arr[] = {10, 20, 30, 40, 1, 22, 3};
  int n = 4;
  int target = 70;

  // printAllPairs(arr, n);

  pair<int, int> ans = checkTwoSum(arr, n, target);
  if(ans.first == -1 && ans.second == -1) {
    cout << "pair is not found";
  }
  else {
    cout << ans.first << " " << ans.second << endl;
  }

  return 0;
}