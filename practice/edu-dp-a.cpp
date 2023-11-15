#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n; 
    cin >> n;
    vector<int> vec(n);
    rep(i, 0, n) cin >> vec[i];
    vector<int> dp(n);
    dp[1] = abs(vec[1]-vec[0]);
    rep(i, 2, n) {
        dp[i] = min(dp[i-1]+abs(vec[i]-vec[i-1]), dp[i-2]+abs(vec[i]- vec[i-2]));
    }

    cout << dp[n-1] << endl;
    return 0;
} 