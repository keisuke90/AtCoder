#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> h(n), dp(n, 1000000009);
    rep(i, 0, n) cin >> h[i];

    dp[0] = 0;
    rep(i, 1, n) {
        rep(j, 1, k+1) {
            int diff = abs(h[i] - h[i-j]);
            if(i-j >= 0) {
                dp[i] = min(dp[i], dp[i-j]+diff);
            }
        }
    }
    cout << dp[n-1] << endl;
    return 0;
} 