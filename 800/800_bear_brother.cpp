
#include <bits/stdc++.h>
using namespace std;

int main() {
  int l, b;
  cin >> l >> b;
  int result = 0;
  for(int i=0; i<10000000; i++) {
    result = i;
    if(l>b) {
      break;
    }
    l *= 3;
    b *= 2;
  }
  cout << result << "\n";
  return 0;
}
