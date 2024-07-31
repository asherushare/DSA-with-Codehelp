#include <bits/stdc++.h>
using namespace std;

void rotateArray(int arr[], int size, int n) {
  int shift = n % size;

  if(shift == 0) {
    return;
  }

  int temp[1000];
  int index = 0;

  for(int i = size - shift; i < size; i++) {
    temp[index] = arr[i];
    index++;
  }

  for(int i = size - 1; i >= 0; i--) {
    arr[i] = arr[i - shift];
  }

  for(int i = 0; i < shift; i++) {
    arr[i] = temp[i];
  }

}


int main()
{

  int arr[] = {23, 43, 10, 2, 3, 233};
  int size = 6;
  int n;
  cout << "Enter number of shifting(n): ";
  cin >> n;

  cout << "Before shifting: " << endl;
  for(int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }

  rotateArray(arr, size, n);

  cout << endl;
  cout << "nAfter shifting: " << endl;

  for(int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}