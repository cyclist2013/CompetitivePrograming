#include <bits/stdc++.h>
#define REP(i, a, b) for(int i=a; i<=b; i++)
using namespace std;

int main() {
    int n;
    cin >> n;
    int a, b;
    REP(i, 1, n) {
        cin >> a >> b;
        int m = a%b;
        if(m==0) {
            cout << m << "\n";
        } else {
            int d = a/b;
            cout << ((d+1)*b - a) << "\n";
        }
        // cout << "m = " << m << "\n"; 
    }


    return 0;
}