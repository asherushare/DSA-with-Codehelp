#include <bits/stdc++.h>
using namespace std;

// hollow rectangle

int main() {

  int length;
  int width;
  cout << "Enter length: ";
  cin >> length;
  cout << "Enter width: ";
  cin >> width;

  // for(int i = 0; i < length; i++) {
  //   for(int j = 0; j < width; j++) {
  //     if( i == 0 || i == length - 1) {
  //       cout << "* ";
  //     }
  //     else {
  //       if(j == 0 || j == width - 1) {
  //         cout << "* ";
  //       }
  //       else {
  //         cout << "  ";
  //       }
  //     }
  //   }
  //   cout << endl;
  // }

  for (int i = 0; i < length; i++)
  {
    for (int j = 0; j < width; j++)
    {
      if(i == 0 || j == 0 || i == length - 1 || j == width - 1) {
        cout << "* ";
      }
      else {
        cout << "  ";
      }
    }
    cout << endl;
  }

  return 0;
}