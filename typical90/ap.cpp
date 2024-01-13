#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int mod = 1000000007;
    int k;
    cin >> k;

    if(k%9 != 0) {
        cout << 0 << endl;
        return 0;
    }

    vector<int> dp(k+1);

    dp[0] = 1;
    rep(i, 1, k+1) {
        int a = min(i, 9);
        rep(j, 1, a+1) {
            dp[i] += dp[i-j];
            dp[i]%=mod;
        }
    }
    cout << dp[k] << endl;

    return 0;
} 