
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  string cs;
  cin >> cs;
  int count=0;
  for(int i=1; i<cs.length(); i++) {
    if(cs[i] == cs[i-1]) {
      count++;
    }
  }
  cout << count << "\n";
  return 0;
}
