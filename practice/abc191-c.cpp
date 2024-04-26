#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int h, w;
    cin >> h >> w;
    vector<vector<char>> vec(h, vector<char>(w));
    rep(i, 0, h) rep(j, 0, w) cin >> vec[i][j];

    int ans = 0;
    int dx[] = {0, 1, 1, 0};
    int dy[] = {0, 0, 1, 1};
    rep(i, 0, h-1) {
        rep(j, 0, w-1) {
            int cnt = 0;
            rep(k, 0, 4) {
                if(vec[i+dy[k]][j+dx[k]] == '#') cnt++;
            }
            if(cnt == 1 || cnt == 3) ans++;
        }
    }
    cout << ans << endl;
    return 0;
} 