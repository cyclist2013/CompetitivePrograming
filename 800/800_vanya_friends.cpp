#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, h;
    cin >> n >> h;
    int a[n];
    int max_w = 0;
    for(int i=0; i<n; i++) {
        cin >> a[i];

        if(a[i] > h) {
            max_w +=2;
        } else {
            max_w++;
        }
    }
    cout << max_w << '\n';

    return 0;
}