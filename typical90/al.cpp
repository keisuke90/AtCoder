#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

// long long gcd(long long a, long long b) {
//     long long ret = a%b;
//     if(ret == 0) return b;
//     return gcd(b, ret);
// }

int main(){
    long long a, b, pow18 = 1000000000000000000LL;
    cin >> a >> b;

    long long c = b / gcd(a, b);
    if(c > pow18/a) cout << "Large" << endl;
    else cout << c * a << endl;

    return 0;
} 