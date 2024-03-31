#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> vec(n);
    rep(i, 1, n) cin >> vec[i];
    int ans;
    cin >> ans;

    vector<vector<long long>> dp(n, vector<long long>(21));

    dp[1][vec[1]] = 1;

    rep(i, 2, n) {
        rep(j, 0, 21) {
            if(j+vec[i] < 21) dp[i][j+vec[i]] += dp[i-1][j];
            if(j-vec[i] > -1) dp[i][j-vec[i]] += dp[i-1][j];
        }
    }

    cout << dp[n-1][ans] << endl;
    return 0;
} 