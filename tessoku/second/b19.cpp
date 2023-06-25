#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;
long long n, w, a[109], b[109];
long long dp[109][100009];

int main(){
    cin >> n >> w;
    rep(i, 1, n+1) cin >> a[i] >> b[i];
    rep(i, 0, n+1) {
        rep(j, 0, 100009) dp[i][j] = 1000000000000000LL;
    }

    dp[0][0] = 0;
    rep(i, 1, n+1){
        rep(j, 0, 100001) {
            if(j < b[i]) dp[i][j] = dp[i-1][j];
            else dp[i][j] = min(dp[i-1][j], dp[i-1][j-b[i]]+a[i]);
        }
    }

    long long ans = 0;
    rep(i, 0, 100009) {
        if(dp[n][i] <= w) ans = i;
    }
    cout << ans << endl;
    return 0;
} 