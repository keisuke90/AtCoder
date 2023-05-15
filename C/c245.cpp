#include <bits/stdc++.h>
#define rep(i, start, end) for(long long i = start; i < end; i++)
using namespace std;

int main(){
    int N, K;
    cin >> N >> K;
    vector<vector<int>> a(2, vector<int>(N));
    rep(i, 0, 2){
        rep(j, 0, N){
            cin >> a[i][j];
        }
    }
    vector<vector<bool>> dp(N, vector<bool>(2));
    dp[0][0] = dp[0][1] = true;
    rep(i, 1, N){
        rep(j, 0, 2){
            int pi = i - 1;
            rep(pj, 0, 2){
                if(!dp[pi][pj]) continue;
                if(abs(a[pj][pi] - a[j][i]) > K) continue;
                dp[i][j] = true;
            }
        }
    }

    rep(i, 0, 2) {
        if(dp[N-1][i]) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
} 