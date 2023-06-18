#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[100009], b[100009], dp[100009];
    rep(i, 2, n+1) cin >> a[i];
    rep(i, 3, n+1) cin >> b[i];
    dp[1] = 0;
    dp[2] = a[2];
    rep(i, 3, n+1) {
        dp[i] = min(dp[i-1]+a[i], dp[i-2]+b[i]);
    }
    
    cout << dp[n] << endl;
    return 0;
}