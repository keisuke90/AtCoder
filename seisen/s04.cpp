#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> vec(n, vector<int>(m));
    rep(i, 0, n) {
        rep(j, 0, m) cin >> vec[i][j];
    }

    long long ans = 0;
    rep(i, 0, m) {
        rep(j, 0, m) {
            if(i==j) continue;
            long long cnt = 0;
            rep(k, 0, n) {
                cnt += max(vec[k][i], vec[k][j]);
            }
            ans = max(ans, cnt);
        }
    }
    cout << ans << endl;

    return 0;
} 