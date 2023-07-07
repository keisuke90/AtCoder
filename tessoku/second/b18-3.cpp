#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, s;
    cin >> n >> s;
    int a[69];
    rep(i, 1, n+1) cin >> a[i];
    vector<vector<bool>> dp(69, vector<bool>(10009));
    dp[0][0] = true;
    rep(i, 1, n+1) {
        rep(j, 0, s+1) {
            if(j < a[i]) {
                if(dp[i-1][j]) dp[i][j] = true;
            } else {
                if(dp[i-1][j] || dp[i-1][j-a[i]]) dp[i][j] = true;
            }
        }
    }

    vector<int> route;
    int pos = s;
    if(dp[n][s]) {
        for(int i = n; i > 0; i--) {
            if(!dp[i-1][pos]) {
                pos -= a[i];
                route.push_back(i);
            }
        }

        cout << route.size() << endl;
        reverse(route.begin(), route.end());
        rep(i, 0, route.size()) cout << route[i] << ' ';
        cout << endl;
    } else {
        cout << "-1" << endl;
    }
    return 0;
} 