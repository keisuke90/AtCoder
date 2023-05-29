#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(m, vector<int>(n));
    map<pair<int, int>, int> mp;
    rep(i, 1, n) {
        rep (j, i+1, n+1) {
            mp[make_pair(i, j)] = 0;
        }
    }
    
    rep(i, 0, m){
        rep(j, 0, n){
            cin >> a[i][j];
        }
    }
    rep(i, 0, m){
        rep(j, 0, n-1){
            int A = min(a[i][j], a[i][j+1]);
            int B = max(a[i][j], a[i][j+1]);
            mp[make_pair(A, B)] += 1;
        }
    }
    
    int ans = 0;
    rep(i, 1, n) {
        rep(j, i+1, n+1) {
            if (mp[make_pair(i, j)] == 0) ans++;
        }
    }
    cout << ans << endl;
    return 0;
} 