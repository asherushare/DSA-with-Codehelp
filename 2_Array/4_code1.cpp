#include <bits/stdc++.h>
using namespace std;

void sortZeroOne(int arr[], int n) {
  int zero = 0;
  int one = 0;

  for(int i = 0; i < n; i++) {
    if(arr[i] == 0) {
      zero++;
    }
    else {
      one++;
    }
  }

  int i = 0;
  for(; i < zero; i++) {
    arr[i] = 0;
  }
  for(i = zero; i < n; i++) {
    arr[i] = 1;
  }

  

  // fill(arr, arr+zero, 0);
  // fill(arr+zero, arr+n, 1);

  for(int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}

int main() {

  int size;

  cout << "enter size here: ";
  cin >> size;

  int arr[size];

  for(int i = 0; i < size; i++) {
    cin >> arr[i];
  }

  for(int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  sortZeroOne(arr, size);

  return 0;
}