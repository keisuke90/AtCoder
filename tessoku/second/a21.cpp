#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;
int n, p[2009], a[2009];
int dp[2009][2009];

int main(){
    cin >> n;
    rep(i, 1, n+1) cin >> p[i] >> a[i];
    dp[1][n] = 0;
    for(int len = n-2; len >= 0; len--) {
        for(int l = 1; l<=n-len; l++) {
            int r = l + len;

            int score1 = 0;
            if(l <= p[l-1] && p[l-1] <= r) score1 = a[l-1];

            int score2 = 0;
            if(l <= p[r+1] && p[r+1]<=r) score2 = a[r+1];

            if(l == 1) {
                dp[l][r] = dp[l][r+1]+score2;
            } else if (r==n) {
                dp[l][r] = dp[l-1][r] + score1;
            } else {
                dp[l][r] = max(dp[l-1][r]+score1, dp[l][r+1]+score2);
            }
        }
    }

    int ans = 0;
    rep(i, 1, n+1) ans = max(ans, dp[i][i]);
    cout << ans << endl;
    return 0;
} 