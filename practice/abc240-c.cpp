#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
    vector<vector<bool>> dp(101, vector<bool>(10009, false));
    dp[0][0] = true;
    rep(i, 1, n+1) {
        int a, b;
        cin >> a >> b;

        rep(j, 0, 10009) {
            if(dp[i-1][j]) {
                dp[i][j+a] = true;
                dp[i][j+b] = true;
            }
        }
    }
    if(dp[n][x]) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
} 