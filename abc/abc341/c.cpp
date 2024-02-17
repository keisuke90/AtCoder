#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int h, w, n;
    cin >> h >> w >> n;
    vector<vector<char>> vec(h, vector<char>(w));

    string s;
    cin >> s;
    rep(i, 0, h) {
        rep(j, 0, w) cin >> vec[i][j];
    }
    vector<pair<int, int>> route;
    rep(i, 0, n) {
        if(s[i] == 'L') route.push_back({0, -1});
        if(s[i] == 'R') route.push_back({0, 1});
        if(s[i] == 'U') route.push_back({-1, 0});
        if(s[i] == 'D') route.push_back({1, 0});
    }

    int ans = 0;
    rep(i, 1, h) {
        rep(j, 1, w) {
            if(vec[i][j] == '#') continue;
            bool ok = true;
            pair pos = {i, j};
            rep(k, 0, route.size()) {
                if(vec[pos.first+route[k].first][pos.second+route[k].second] == '#') {
                    ok = false;
                    break;
                } else {
                    pos.first+=route[k].first;
                    pos.second+=route[k].second;
                }
            }
            if(ok) ans++;
        }
    }
    cout << ans << endl;

    return 0;
} 