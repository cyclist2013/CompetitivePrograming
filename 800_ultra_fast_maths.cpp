#include <bits/stdc++.h>
using namespace std;

int main () {
    string s1, s2;
    cin >> s1 >> s2;

    string s3 = "";    
    for(int i=0; i<s1.length(); i++) {
        if(s1[i] == s2[i]) {
            s3 += '0';
        } else {
            s3 += '1';
        }
    }
    // cout << "s1:" << s1 << "\n";
    // cout << "s2:" << s2 << "\n";
    // cout << "s3:" << s3 << "\n";
    cout << s3 << '\n';

    return 0;
}