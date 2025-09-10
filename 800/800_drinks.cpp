#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    double sum = 0;
    int t;
    for(int i=0; i<n; i++) {
        cin >> t;
        sum += t;
    }
    cout << static_cast<double>(sum/n) << '\n';

    return 0;
}