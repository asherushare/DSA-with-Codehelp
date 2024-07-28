#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int k, int n) {
  int start = 0;
  int end = n - 1;

  while(start <= end) {
    int mid = start + (end - start) / 2;
    if(arr[mid] == k) {
      return mid;
    }
    else if(arr[mid] > k) {
      end = mid - 1;
    }
    else if(arr[mid] < k) {
      start = mid + 1;
    }
  }
  return -1;
}

int main() {

  int size;
  cout << "Enter size: ";
  cin >> size;

  int arr[size];
  int key;

  cout << "Enter array elements: ";
  for(int i = 0; i < size; i++) {
    cin >> arr[i];
  }

  cout << "Enter key to search: ";
  cin >> key;

  int result = binarySearch(arr, key, size);

  if(result != -1) {
    cout << "Key found at index: " << result << endl;
  }
  else {
    cout << "Key not found" << endl;
  }

  return 0;
}