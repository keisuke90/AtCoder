#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int s;
    cin >> s;
    long long mod = 1000000007;
    vector<long long> dp(s+1);
    dp[0]=1;
    rep(i, 3, s+1) {
        dp[i] = dp[i-3] + dp[i-1];
        dp[i]%=mod;
    }
    cout << dp[s] << endl;
    return 0;
} 