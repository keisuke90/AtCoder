#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> abc(n, vector<int>(3)), dp(n, vector<int>(3));
    rep(i, 0, n) {
        rep(j, 0, 3) cin >> abc[i][j];
    }
    rep(i, 0, n) {
        rep(j, 0, 3){
            if(i == 0) {
                dp[i][j] = abc[i][j];
            } else {
                rep(k, 0, 3) {
                    if(j == k) continue;
                    dp[i][j] = max(dp[i][j], dp[i-1][k] + abc[i][j]);
                }
            }
        }
    }

    int ans = 0;
    rep(i, 0, 3) ans = max(ans, dp[n-1][i]);
    cout << ans << endl;
    return 0;
} 