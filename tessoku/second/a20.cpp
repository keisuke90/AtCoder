#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;
string s, t;
int dp[2009][2009], n, m;

int main(){
    cin >> s >> t;
    
    dp[0][0] = 0;
    rep(i, 1, s.size()+1) {
        rep(j, 1, t.size()+1) {
            if(s[i-1] == t[j-1]) {
                dp[i][j] = max({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]+1});
            } else {
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }

    cout << dp[s.size()][t.size()] << endl;
    return 0;
} 