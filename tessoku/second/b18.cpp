#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, s;
    cin >> n >> s;
    int a[70];
    rep(i, 1, n+1) cin >> a[i];
    vector<vector<bool>> dp(n+1, vector<bool>(s));
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

    vector<int> selected;
    int pos = s;
    if(dp[n][s]){
        for(int i = n; i >= 1; i--) {
            if(!dp[i-1][pos]) {
                pos -= a[i];
                selected.push_back(i);
            }
        }
        reverse(selected.begin(), selected.end());
        cout << selected.size() << endl;
        rep(i, 0, selected.size()) cout << selected[i] << ' ';
        cout << endl;
    } else {
        cout << -1 << endl;
    }
    return 0;
} 