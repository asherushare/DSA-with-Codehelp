#include <bits/stdc++.h>
using namespace std;

int main() {

  int size;
  cout << "Enter size: ";
  cin >> size;

  int arr[100];
  cout << "Enter elements: ";
  for(int i = 0; i < size; i++) {
    cin >> arr[i];
  }

  int k = INT_MIN;
  for(int i = 0; i < size; i++) {
    if(arr[i] > k) {
      k = arr[i];
    }
  }

  cout << "maximum: " << k << endl;

  return 0;
}