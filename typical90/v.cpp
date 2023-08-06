#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

long long gcd(long long a, long long b) {
    if(a > b) {
        a = a%b;
        if(a == 0) return b;
    } else {
        b = b%a;
        if(b == 0) return a;
    }
    return gcd(a, b);
}

int main(){
    long long a, b, c;
    cin >> a >> b >> c;

    long long r = gcd(a, gcd(b, c));
    long long ans = (a/r-1)+(b/r-1)+(c/r-1);
    cout << ans << endl;
    return 0;
} 