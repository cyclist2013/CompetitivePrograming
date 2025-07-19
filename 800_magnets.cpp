#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    char p,q;
    int count = 0;
    if(n>0) {
        cin >> p >> q;
        count++;
        //cout << p << q << " : " << count << '\n';
    }
    
    char s, t;
    for(int i=1; i<n; i++) {
        cin >> s >> t;
        if(s!=p) {
            count++;
            p = s;
            q = t;
        }
        //cout << s << t << " : " << count << '\n';
    }

    cout << count << '\n';

    return  0;
}