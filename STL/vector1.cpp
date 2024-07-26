#include <bits/stdc++.h>
using namespace std;

int main() {

  // creation

  vector<int> v;
  vector<int> newV;


  vector<int> miles(10, 23);

  vector<int> distances(15, 0);

  cout << *(distances.begin()) << endl;
  cout << *(miles.begin()) << endl;

  v.push_back(233);
  v.push_back(111);
  v.push_back(112);
  v.push_back(23442);
  v.push_back(2342);

  cout << *(v.begin()) << endl;
  cout << v.size() << endl;

  miles.pop_back();

  cout << miles.size() << endl;

  cout << v.front() << endl;
  cout << v.back() << endl;

  if(v.empty()) {
    cout << "Vector is empty!" << endl;
  }
  else {
    cout << "V vector is not empty!" << endl;
  }

  if (newV.empty())
  {
    cout << "Vector is empty!" << endl;
  }
  else
  {
    cout << "V vector is not empty!" << endl;
  }

  cout << v[1] << endl;
  cout << v.at(0) << endl;
  cout << v.capacity() << endl;
  cout << v.size() << endl;
  // cout << newV.capacity() << endl;
  newV.reserve(5);
  cout << newV.capacity() << endl;

  cout << newV.max_size() << endl;
  cout << v.max_size() << endl;

  vector<int> newVector;

  newVector.push_back(12);
  newVector.push_back(13);
  newVector.push_back(14);
  newVector.push_back(15);

  vector<int>::iterator it = newVector.begin();

  while(it != newVector.end()) {
    cout << *it << " ";
    it++;
  }

  return 0;
}