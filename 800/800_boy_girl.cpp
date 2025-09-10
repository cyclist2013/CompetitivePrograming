
#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  set<char> char_counter;
  for(int i=0; i<s.length(); i++) {
    char_counter.insert(s[i]);
  }
  if(char_counter.size() %2 == 0) {
    cout << "CHAT WITH HER!";
  } else {
    cout << "IGNORE HIM!";
  }
  return 0;
}
