#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, s;
    cin >> n >> s;
    vector<int> vec(n+1);
    rep(i, 1, n+1) cin >> vec[i];
    vector<vector<bool>> dp(69, vector<bool>(10009));
    dp[0][0] = true;

    rep(i, 1, n+1) {
        rep(j, 0, s+1) {
            if(j < vec[i]) {
                dp[i][j] = dp[i-1][j];
            } else {
                if(dp[i-1][j] || dp[i-1][j-vec[i]]) {
                    dp[i][j] = true;
                }
            }
        }
    }

    if(dp[n][s]) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
} 