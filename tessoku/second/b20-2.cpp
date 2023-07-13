#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    vector<vector<int>> dp(2009, vector<int>(2009));
    rep(i, 0, s.size()+1) {
        rep(j, 0, t.size()+1) {
            if(i == 0 && j == 0) dp[i][j] = 0;
            else if (i == 0) dp[i][j] = dp[i][j-1]+1;
            else if (j == 0) dp[i][j] = dp[i-1][j]+1;
            else if (s[i-1] == t[j-1]) dp[i][j] = min({dp[i-1][j]+1, dp[i][j-1]+1, dp[i-1][j-1]});
            else dp[i][j] = min({dp[i-1][j]+1, dp[i][j-1]+1, dp[i-1][j-1]+1});
        }
    }
    cout << dp[s.size()][t.size()] << endl;
    return 0;
} 