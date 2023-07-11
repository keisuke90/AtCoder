#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int N, W;
    cin >> N >> W;
    vector<vector<long long>> dp(109, vector<long long>(100009, 1000000000000LL)); 
    dp[0][0] = 0;
    rep(i, 1, N+1) {
        int w, v;
        cin >> w >> v;
        rep(j, 0, 100009) {
            if(j < v) dp[i][j] = dp[i-1][j];
            else dp[i][j] = min(dp[i-1][j], dp[i-1][j-v]+w);
        }
    }

    int ans = 0;
    rep(i, 0, 100001) if(dp[N][i] <= W) ans = i;
    cout << ans << endl;
    return 0;
} 