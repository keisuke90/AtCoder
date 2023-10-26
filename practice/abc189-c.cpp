#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> vec(n+1);
    vector<vector<int>> mv(n+1, vector<int>(n+1, 1000000));
    rep(i, 1, n+1) cin >> vec[i];

    rep(i, 1, n+1) {
        rep(j, i, n+1) {
            mv[i][j] = min(vec[j], mv[i][j-1]);
        }
    }
    
    long long ans = 0;
    rep(i, 1, n+1) {
        rep(j, i, n+1) {
            ans = max(ans, (long long)mv[i][j]*(j-i+1));
        }
    }
    cout << ans << endl;
    return 0;
} 