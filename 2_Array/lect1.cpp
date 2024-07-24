#include <iostream>
using namespace std;

int main() {

  // int arr1[10];

  // int arr[] = {1, 2, 3, 4, 5, 6, 7};
  // int drr[4] = {3};

  // cout << drr[3] << endl;
  // cout << drr[2] << endl;
  // cout << drr[0] << endl;

  int arr[4];
  fill(arr, arr+4, 23);
  cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << endl;

  int krr[5];
  fill(krr, krr+5, 299);
  cout << krr[0] << " " << krr[1] << " " << krr[2] << " " << krr[3] << endl;
  

  return 0;
}