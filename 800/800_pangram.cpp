#include <bits/stdc++.h>
#define REP(i, a, b) for(int i=a; i<=b; i++)
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(n<26) {
        cout << "NO" << '\n';
    } else {
        set<int> count;
        REP(i, 0, s.length()-1) {
            if(s[i] > 96) {
                s[i] -= 32;
            }
            count.insert(static_cast<int>(s[i]));
        }
        // cout << "count size " << count.size() << "\n";

        if(count.size() == 26) {
            cout << "YES" << '\n';
        } else {
                    cout << "NO" << '\n';
        }
    }


    return 0;
}