#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> vec(m, vector<int>());
    vector<int> p(m);;
    rep(i, 0, m) {
        int k;
        cin >> k;
        rep(j, 0, k) {
            int s;
            cin >> s;
            s--;
            vec[i].push_back(s);
        }
    }
    rep(i, 0, m) cin >> p[i];
    int ans = 0;
    rep(bit, 0, (1<<n)) {
        vector<int> pp(m);
        rep(i, 0, m) {
            int cnt = 0;
            rep(j, 0, vec[i].size()) {
                if(bit & (1 << vec[i][j])) {
                    cnt++;
                    cnt%=2;
                }
            }
            pp[i] = cnt;
        }
        if(pp == p) ans++;
    }
    cout << ans << endl;
    return 0;
} 