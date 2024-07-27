#include <bits/stdc++.h>
using namespace std;

int main() {

  unordered_set<int> st;

  st.insert(13);
  st.insert(14);
  st.insert(3);
  st.insert(186);

  cout << st.size() << endl;
  st.erase(st.begin(), st.end());
  cout << st.size() << endl;


  // travers
  unordered_set<int> :: iterator it = st.begin();

  while(it != st.end()) {
    cout << *it << " ";
    it++;
  }

  return 0;
}