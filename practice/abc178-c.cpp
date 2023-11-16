#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;
long long n;
long long mod = 1000000007;

long long calc(long long a, int b) {
    long long res = 1;
    rep(i, 0, b) {
        res*=a;
        res%=mod;
    }
    return res;
}


int main(){
    cin >> n;
    long long ans = calc(10, n) - (calc(9, n)+calc(9,n)-calc(8, n));
    ans%=mod;
    ans = (ans+mod)%mod;
    cout << ans << endl;

    return 0;
} 