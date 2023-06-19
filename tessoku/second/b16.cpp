#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    int h[100009], dp[100009];
    rep(i, 1, n+1) cin >> h[i];
    dp[1] = 0;
    dp[2] = abs(h[1]-h[2]);
    rep(i, 3, n+1) {
        dp[i] = min(dp[i-1]+abs(h[i]-h[i-1]), dp[i-2]+abs(h[i]-h[i-2]));
    }
    cout << dp[n] << endl;
    return 0;
} 