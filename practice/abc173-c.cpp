#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int h, w, k;
    cin >> h >> w >> k;

    vector<vector<char>> vec(6, vector<char>(6));
    rep(i, 0, h) {
        rep(j, 0, w) cin >> vec[i][j];
    }

    int ans = 0;
    rep(bit1, 0, (1<<h)) {
        rep(bit2, 0, (1<<w)) {
            int cnt = 0;
            rep(i, 0, h) {
                rep(j, 0, w) {
                    if(!(bit1 & (1<<i)) && !(bit2 & (1<<j)) && vec[i][j]=='#') cnt++;
                }
            }
            if(cnt == k) ans++;
        }
    }

    cout << ans << endl;
    return 0;
} 