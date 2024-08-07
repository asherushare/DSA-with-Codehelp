#include <bits/stdc++.h>
using namespace std;

class Queue {
  private:
  int *arr;
  int n;
  int front;
  int rear;

  public:
  Queue(int size) {
    arr = new int[size];
    n = size;
    front = -1;
    rear = -1;
  }

  bool isEmpty()
  {
    if (front == -1 && rear == -1)
    {
      return true;
    }
    else
    {
      return false;
    }
  }

  void push(int val) {
    if(rear == n - 1) {
      cout << "Overflow" << endl;
    }
    else if(front == -1 && rear == -1) {
      rear++;
      front++;
      arr[rear] = val;
    }
    else {
      rear++;
      arr[rear] = val;
    }
  }

  void pop() {
    if(isEmpty()) {
      cout << " Queue is empty" << endl;
    }
    else if(front == rear){
      front = rear = -1;
    }
    else {
      front++;
    }
  }

  int getFront() {
    if(isEmpty()) {
      cout << " Queue is empty" << endl;
    }
    else {
      return arr[front];
    }
  }
  
  int getRear() {
    if(isEmpty()) {
      cout << " Queue is empty" << endl;
    }
    else 
      return arr[rear];
  }

  int getSize() {
    return rear - front + 1;
  }

}

int main() {

  Queue q(10);

  q.isEmpty();
  q.push(12);
  q.push(100);
  q.isEmpty();
  cout << q.getSize() << endl;
  cout << q.getFront() << endl;
  q.pop();
  q.getRear();


  return 0;
}