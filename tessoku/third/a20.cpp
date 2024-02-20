#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    int a = s.size();
    int b = t.size();
    vector<vector<int>> dp(a+1, vector<int>(b+1));
    rep(i, 1, a+1) {
        rep(j, 1, b+1) {
            dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            if(s[i-1]==t[j-1]) {
                dp[i][j] = max(dp[i][j], dp[i-1][j-1]+1);
            }
        }
    }
    cout << dp[a][b] << endl;
    return 0;
} 