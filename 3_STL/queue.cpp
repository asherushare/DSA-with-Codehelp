#include <bits/stdc++.h>
using namespace std;

int main() {

  queue<int> q1;

  q1.push(10);
  q1.push(11);
  q1.push(12);
  q1.push(13);

  queue<int> q2;

  q2.push(100);
  q2.push(101);
  q2.push(102);
  q2.push(103);

  q1.swap(q2);

  cout << q1.front() << endl;

  // queue<int> q;

  // q.push(1);
  // q.push(2);

  // q.push(3);

  // q.pop();
  // q.pop();

  // q.push(4);
  // q.push(5);

  // cout << q.size() << endl;

  // if(q.empty()) {
  //   cout << "This is empty queue" << endl;
  // }
  // else {
  //   cout << "this is not empty queue" << endl;
  // }

  // cout <<q.front() << endl;
  // cout << q.back() << endl;

  return 0;
}