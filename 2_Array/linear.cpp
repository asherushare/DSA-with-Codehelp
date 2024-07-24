#include <bits/stdc++.h>
using namespace std;

void linearSearch(int arr[], int n, int k) {
  for(int i = 0; i < n; i++) {
    if(arr[i] == k) {
      cout << "present" << endl;
    }
  }
  if {
    cout << "Element is not present";
  } 
}

int main() {

  int arr[] = {0,34, 434, 443, 2};
  int size = 5;

  int key;
  cout << "Enter key: ";
  cin >> key;

  linearSearch(arr, size, key);

  return 0;
}