#include <bits/stdc++.h>
using namespace std;

int main() {
    string s[2] = {"that I love ", "that I hate "};
    stringstream output;
    int n;
    cin >> n;
    output << "I hate ";
    int i = 2;
    while(i <= n) {
        if(i%2 == 0) { output << s[0]; } 
        else { output << s[1]; }
        i++;
    }
    output << "it";
    cout << output.str() << "\n";
    return 0;
}