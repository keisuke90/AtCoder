#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    rep(i, 1, n) cin >> a[i];
    rep(i, 2, n) cin >> b[i];
    vector<int> dp(n);
    
    rep(i, 1, n) {
        if(i == 1) dp[i] = a[i];
        else {
            dp[i] = min(dp[i-1]+a[i], dp[i-2]+b[i]);
        }
    }
    cout << dp[n-1] << endl;

    return 0;
} 