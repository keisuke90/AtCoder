// #include <bits/stdc++.h>
// #define rep(i, start, end) for(int i = start; i < end; i++)
// using namespace std;

// int main(){
//     int n, s, m, l;
//     cin >> n >> s >> m >> l;
//     vector<long long> dp(1001, 1e9);
//     dp[0] = 0;
//     for(int i = 0; i <= n; i++){
//         if(i+6 <= 1000) dp[i+6] = min(dp[i+6], dp[i]+s);
//         if(i+8 <= 1000) dp[i+8] = min(dp[i+8], dp[i]+m);
//         if(i+12 <= 1000) dp[i+12] = min(dp[i+12], dp[i]+l);
//     }
//     long long ans = *min_element(dp.begin()+n, dp.end());
//     cout << ans << endl;
//     return 0;
// }

#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, s, m, l;
    cin >> n >> s >> m >> l;

    int ans = 1000000000;
    rep(i, 0, 101) {
        rep(j, 0, 101) {
            rep(k, 0, 101) {
                if(i*6+j*8+k*12 >= n) {
                    ans=min(ans, s*i+m*j+l*k);
                }
            }
        }
    }
    cout << ans << endl;

    return 0;
} 