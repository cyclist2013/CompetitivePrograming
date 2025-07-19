#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool easy = true;
    int view;
    int i=0;
    for(; i<n; i++) {
        cin >> view;
        if(view == true) {
            easy = false;
            break;
        }
    }
    while(i<n) {
        cin>>view;
        i++;
    }

    if(easy) cout << "EASY" << "\n";
    else cout << "HARD" << "\n";

    return 0;

}