#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int mod = 998244353;
    string s;
    cin >> s;
    int n = s.size();
    vector<vector<int>> dp(n+1, vector<int>(n+1));
    dp[0][0] = 1;
    rep(i, 0, n) {
        rep(j, 0, n) {
            if(s[i] != ')') dp[i+1][j+1] += dp[i][j];
            dp[i+1][j+1] %= mod;
            if(j != 0 && s[i] != '(') dp[i+1][j-1] += dp[i][j];
            dp[i+1][j-1] %= mod;
        }
    }
    cout << dp[n][0] << endl;
    return 0;
} 