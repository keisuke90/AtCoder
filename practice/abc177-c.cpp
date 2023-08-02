#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    int a[200009];
    long long sum = 0;
    long long mod = 1000000007;
    cin >> n;
    rep(i, 1, n+1) {
        cin >> a[i];
        sum += a[i];
        sum%=mod;
    }

    long long ans = 0;
    rep(i, 1, n+1) {
        sum -= a[i];
        if(sum < 0) sum += mod;

        ans += a[i] * sum;
        ans %= mod;
    }

    cout << ans << endl;
    return 0;
} 