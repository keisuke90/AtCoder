#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    vector<vector<int>> dp(s.size()+1, vector<int>(t.size()+1));

    rep(i, 1, s.size()+1) {
        rep(j, 1, t.size()+1) {
            if(s[i-1] == t[j-1]) dp[i][j] = max({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]+1});
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }

    string ans = "";
    int i = s.size(), j = t.size();
    while(i > 0 && j > 0) {
        if(dp[i][j] == dp[i-1][j]) i--;
        else if(dp[i][j] == dp[i][j-1]) j--;
        else {
            ans = s[i-1] + ans;
            i--; j--;
        }
    }
    cout << ans << endl;
    return 0;
} 