#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int h, w;
    cin >> h >> w;
    vector<string> vec(h);
    vector<vector<int>> ans(h, vector<int>(w, 0));
    rep(i, 0, h) cin >> vec[i];

    ans[0][0] = 1;
    rep(i, 0, h) {
        rep(j, 0, w) {
            if(i == 0 && j == 0) continue;
            if(vec[i][j] == '#') {
                ans[i][j] = -10000;
                continue;
            };
            if(i == 0) ans[i][j] = ans[i][j-1] +1;
            else if (j == 0) {
                ans[i][j] = ans[i-1][j] + 1;
            } else {
                ans[i][j] = max(ans[i-1][j], ans[i][j-1]) + 1;
            }
        }
    }

    int m = 0;
    rep(i, 0, h) {
        rep(j, 0, w) {
            m = max(m, ans[i][j]);
        }
    }
    cout << m << endl;
    return 0;
} 