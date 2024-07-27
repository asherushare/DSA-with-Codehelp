#include <bits/stdc++.h>
using namespace std;

int main() {

  priority_queue<int> pq;

  // min-heap --> minimum value -> highest priority
  priority_queue<int, vector<int>, greater<int> > prioq;

  prioq.push(12);
  prioq.push(2);
  prioq.push(19);

  cout << prioq.top() << endl;

  pq.push(12);
  pq.push(13);
  pq.push(14);
  pq.push(15);
  pq.push(1);
  pq.push(2);

  cout << pq.top() << endl;
  pq.pop();

  cout << pq.top() << endl;

  return 0;
}