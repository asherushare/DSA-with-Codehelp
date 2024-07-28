#include <bits/stdc++.h>
using namespace std;

int main() {

  //creation
  deque<int> dq;

  //insertion
  dq.push_back(1);

  dq.push_back(10);
  dq.push_front(110);

  dq.push_back(1210);
  dq.push_front(122);

  dq.pop_front();

  dq.pop_back();

  cout << dq.size() << endl;

  return 0;
}