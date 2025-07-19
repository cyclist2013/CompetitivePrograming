
#include<bits/stdc++.h>
using namespace std;

int main() {
    uint64_t n;
    cin >> n;
    
    //uint64_t m = n/2;

    //uint64_t total_sum = (n*(n+1))>>1;
    //uint64_t pos_sum = m*(m+1);
    //cout << "total_sum " << total_sum << '\n';
    //cout << "pos_sum " << pos_sum << '\n';
    //cout << pos_sum - total_sum << '\n';
    //int neg_sum = pos_sum - total_sum;
    //cout << "neg_sum " << neg_sum << '\n';
    //cout << (pos_sum + neg_sum) << '\n';

    //cout << static_cast<int64_t>((2*pos_sum) - total_sum) << '\n';
    //uint64_t pos_sum2 = (pos_sum2<<1);
    //cout << "pos_sum2 " << pos_sum2 << '\n';
    //cout << static_cast<int64_t>((pos_sum<<1) - total_sum) << '\n';
    //uint64_t res1 = pos_sum2 - total_sum;
    //cout <<  res1 << '\n';

    if(n%2 == 0) cout << (n>>1) << "\n";
    else if(n%2 == 1) cout << static_cast<int64_t>(-1 * ((n>>1)+1)) << "\n";
    
    return 0;
}