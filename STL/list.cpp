#include <bits/stdc++.h>
using namespace std;

int main() {

  //creation

  // list<int> mylist;

  // mylist.push_back(23);
  // mylist.push_back(32);
  // mylist.push_back(32);
  // mylist.push_back(233);
  // mylist.push_front(1);
  // mylist.push_front(2);

  // mylist.pop_back();
  // mylist.pop_front();

  // cout << mylist.size() << endl;

  // // mylist.clear();

  // cout << mylist.size() << endl;
  // if(mylist.empty()) {
  //   cout << "Empty" << endl;
  // }
  // else {
  //   cout << "not empty" << endl;
  // }

  // cout << mylist.front() << endl;
  // cout << mylist.back() << endl;

  // list<int>::iterator it = mylist.begin();

  // while(it != mylist.end()) {
  //   cout << *it << " ";
  //   it++;
  // }


  list<int> first;
  first.push_back(12);
  first.push_back(13);
  first.push_back(14);
  first.push_back(15);


  list<int> second;

  second.push_back(100);
  second.push_back(101);
  second.push_back(102);
  second.push_back(103);

  first.insert(first.begin(), 1000);
  

  first.swap(second);

  first.erase(first.begin(), first.end());

  // list<int>:: iterator it = first.begin();

  // while(it != first.end()) {
  //   cout << *it << " ";
  //   it++;
  // }

  cout << first.size() << endl;


  return 0;
}