#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, s;
    cin >> n >> s;
    vector<int> a(n+1);
    rep(i, 1, n+1) cin >> a[i];
    vector<vector<bool>> dp(n+1, vector<bool>(s));
    dp[0][0] = true;
    rep(i, 1, n+1) {
        rep(j, 0, s+1) {
            if(j < a[i]) if(dp[i-1][j]) dp[i][j] = true;
            if(j >= a[i]) if(dp[i-1][j] || dp[i-1][j-a[i]]) dp[i][j] = true;
        }
    }

    if(dp[n][s]) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
} 