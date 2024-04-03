#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int d, n;
    cin >> d >> n;
    vector<int> mtmp(d);
    rep(i, 0, d) cin >> mtmp[i];
    vector<pair<int, int>> dtmp(n);
    vector<int> hade(n);
    rep(i, 0, n) {
        int a, b;
        cin >> a >> b;
        dtmp[i] = {a, b};
        cin >> hade[i];
    }

    vector<vector<bool>> vec(d, vector<bool>(n));
    rep(i, 0, d) {
        rep(j, 0, n) {
            if(mtmp[i] >= dtmp[j].first && mtmp[i] <= dtmp[j].second) {
                vec[i][j] = true;
            }
        }
    }

    vector<vector<int>> dp(d, vector<int>(n));
    rep(i, 1, d) {
        rep(j, 0, n) {
            if(!vec[i][j]) continue;
            rep(k, 0, n) {
                if(!vec[i-1][k]) continue;
                dp[i][j] = max(dp[i][j], dp[i-1][k]+abs(hade[j]-hade[k]));
            }
        }
    }

    int ans = 0;
    rep(i, 0, d) {
        ans = max(ans, dp[d-1][i]);
    }
    cout << ans << endl;
    return 0;
} 