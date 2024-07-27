#include <bits/stdc++.h>
using namespace std;

int main() {

  // //creation 
  // unordered_map<string, string> table;

  // //insertion

  // table["in"] = "India";
  // table.insert(make_pair("en", "england"));

  // pair<string, string> p;
  // p.first = "br";
  // p.second = "Brazil";

  // table.insert(p);

  // cout << table.size() << endl;
  // table.clear();
  // cout << table.size() << endl;

  // if(table.empty()) {
  //   cout << "empty table" << endl;
  // }
  // else {
  //   cout << "not empty table" << endl;
  // }

  // table.insert(make_pair("pr", "Patra"));
  // table.insert(make_pair("py", "Priya"));
  // table.insert(make_pair("wh", "Weds"));
  // table.at("pr") = "Mr. Patra";
  // table["pr"] = "Priya's love";

  // cout << table.size() << endl;

  // cout << table.at("pr") << endl;

  // unordered_map<string, string>:: iterator it = table.begin();

  // while(it != table.end()) {
  //   pair<string, string> p = *it;
  //   cout << p.first << " " << p.second << endl;
  //   it++;
  // }

  // cout << table.size() << endl;
  // // table.erase(table.begin(), table.end());
  // cout << table.size() << endl;

  // if(table.find("pr") != table.end()) {
  //   cout << "Key found in table " << endl;
  // }
  // else {
  //   cout << "Key not found in table " << endl;
  // }

  map<int, string> table;

  table.insert(make_pair(2, "Priya"));
  table.insert(make_pair(1, "Patra"));
  table.insert(make_pair(3, "Babita"));

  map<int, string>:: iterator it = table.begin();

  while(it != table.end()) {
    pair<int, string> p = *it;
    cout << p.first << " " << p.second << endl;
    it++;
  }

  return 0;
}