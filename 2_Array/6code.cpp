#include <bits/stdc++.h>
using namespace std;

void printAllTripletes(int arr[], int n) {
  int count = 0;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      for(int k = 0; k < n; k++) {
        cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
        count++;
      }
    }
  }
  cout << count << endl;
}

int main() {

  int arr[] = {23, 43, 10, 2};
  int size = 4;

  printAllTripletes(arr, size);

  return 0;
}