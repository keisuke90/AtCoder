#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    long long mod = 1000000007;
    vector<long long> a(n);
    rep(i, 0, n) cin >> a[i];
    vector<long long> b;
    b=a;
    rep(i, 1, n) b[i]+=b[i-1];
    long long ans = 0;
    rep(i, 0, n-1) {
        long long tmp = (b[n-1]-b[i])%mod;
        ans+=a[i]*tmp;
        ans%=mod;
    }
    cout << ans << endl;
    return 0;
} 