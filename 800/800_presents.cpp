#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n] = {0};
    int b[n] = {0};
    for(int i=0; i<n; i++) {
        cin >> a[i];
        if(a[i] <= n) {
            b[a[i]-1] = i+1;
        }
    }

    for(int i=0; i<n; i++) {
        cout << b[i] << ' ';
    } cout << '\n';

    
    return 0;
}