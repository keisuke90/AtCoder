#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[100009], b[100009];
    vector<int> dp(100009, -1000000000);
    rep(i, 1, n) cin >> a[i];
    rep(i, 1, n) cin >> b[i];

    dp[1] = 0;
    rep(i, 1, n+1) {
        dp[a[i]] = max(dp[a[i]], dp[i]+100);
        dp[b[i]] = max(dp[b[i]], dp[i]+150);
    } 

    cout << dp[n] << endl;
    return 0;
} 