#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> shoe_set;
    int temp;
    for(int i=0; i<4; i++) {
        cin>>temp;
        shoe_set.insert(temp);
    }
    cout << (4 - shoe_set.size()) << "\n";

    return 0;
}