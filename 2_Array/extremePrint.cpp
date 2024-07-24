#include <bits/stdc++.h>
using namespace std;

void extremePrint(int arr[], int n) {
  int first = 0;
  int last = n - 1;

  while(first <= last) {
    cout << arr[first] << " ";
    first++;
    cout << arr[last] << " ";
    last--;
  }
}

int main() {

  int size;
  cout << "Enter size: ";
  cin >> size;

  int arr[size];
  for(int i = 0; i < size; i++) {
    cin >> arr[i];
  }

  extremePrint(arr, size);

  return 0;
}