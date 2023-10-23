#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s;
    cin >> s;
    long long mod = 1000000007;
    int n = s.size();
    vector<vector<int>> dp(n+1, vector<int>(9));
    rep(i, 0, n+1) dp[i][0] = 1;
    string c = "chokudai";

    rep(i, 0, n) {
        rep(j, 0, 8) {
            if(s[i] != c[j]) {
                dp[i+1][j+1] = dp[i][j+1];
            } else {
                dp[i+1][j+1] = (dp[i][j+1] + dp[i][j]) % mod;
            }
        }
    }

    cout << dp[n][8]%mod << endl;
    return 0;
} 