#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;
int mod = 1000000007;
string t = "atcoder";

int main(){
    int n;
    string s;
    cin >> n >> s;
    vector<vector<int>> dp(n+1, vector<int>(t.size()+1, 0));

    dp[0][0] = 1;

    rep(i, 0, n) {
        rep(j, 0, t.size()+1) {
            dp[i+1][j] += dp[i][j];
            dp[i+1][j] %= mod;

            if(j < t.size() && s[i] == t[j]) {
                dp[i+1][j+1] += dp[i][j];
                dp[i+1][j+1] %= mod;
            }
        }
    }

    cout << dp[n][t.size()] << endl;
    return 0;
} 