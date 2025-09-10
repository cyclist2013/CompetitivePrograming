#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int t = '\0';    
    set<int> v;

    cin >> n;
    // for(int i=0; i<n; i++) {
    //     cin >> t;
    //     v.insert(t);
    // }

    cin >> t;
    while(t != '\0') {
        if(t>0) {
            v.insert(t);
        }
        cin >> t;
    }

    if(v.size() == n) {
        cout << "I become the guy." << '\n';
    } else {
        cout << "Oh, my keyboard!" << '\n';
    }


    return 0;
}