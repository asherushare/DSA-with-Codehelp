#include <bits/stdc++.h>
using namespace std;

void counting(int arr[], int n) {
  int countOne = 0;
  int countZero = 0;
  for(int i = 0; i < n; i++) {
    if(arr[i] == 0) {
      countZero++;
    }
    if(arr[i] == 1) {
      countOne++;
    }
  }

  cout << "no. of one's: " << countOne << endl;
  cout << "no. of zero's: " << countZero << endl;
}

int main() {

  int arr[] = {1, 0, 1, 0, 0, 0, 1, 0, 1,0};
  int size = 10;

  counting(arr, size);

  return 0;
}