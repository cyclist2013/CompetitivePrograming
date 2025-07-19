#include <bits/stdc++.h>
using namespace std;

bool beautiful_year(int n) {
    int a[10]={0};
    while(n > 0) {
        int r = n%10;
        if(a[r] >= 1) return false;
        else {
            a[r] = 1;
        }
        n/=10;
    }
    return true;
}

int main() {
    int year;
    cin >> year;
    int n = year+1;
    while (!beautiful_year(n)) {
        n++;
    }
    cout << n << '\n';
    return 0;
}