#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;
int n ,m;
vector<string> s(109);

bool isTakCode(int y, int x) {
    if(s[y][x] != '#') return false;
    if(s[y][x+1] != '#') return false;
    if(s[y][x+2] != '#') return false;
    if(s[y][x+3] != '.') return false;
    if(s[y+1][x] != '#') return false;
    if(s[y+1][x+1] != '#') return false;
    if(s[y+1][x+2] != '#') return false;
    if(s[y+1][x+3] != '.') return false;
    if(s[y+2][x] != '#') return false;
    if(s[y+2][x+1] != '#') return false;
    if(s[y+2][x+2] != '#') return false;
    if(s[y+2][x+3] != '.') return false;
    if(s[y+3][x] != '.') return false;
    if(s[y+3][x+1] != '.') return false;
    if(s[y+3][x+2] != '.') return false;
    if(s[y+3][x+3] != '.') return false;
    if(s[y+5][x+5] != '.') return false;
    if(s[y+5][x+6] != '.') return false;
    if(s[y+5][x+7] != '.') return false;
    if(s[y+5][x+8] != '.') return false;
    if(s[y+6][x+5] != '.') return false;
    if(s[y+6][x+6] != '#') return false;
    if(s[y+6][x+7] != '#') return false;
    if(s[y+6][x+8] != '#') return false;
    if(s[y+7][x+5] != '.') return false;
    if(s[y+7][x+6] != '#') return false;
    if(s[y+7][x+7] != '#') return false;
    if(s[y+7][x+8] != '#') return false;
    if(s[y+8][x+5] != '.') return false;
    if(s[y+8][x+6] != '#') return false;
    if(s[y+8][x+7] != '#') return false;
    if(s[y+8][x+8] != '#') return false;

    return true;
}

int main(){
    cin >> n >> m;
    rep(i, 0, n) {
        cin >> s[i];
    }
    vector<pair<int, int>> ans;
    rep(i, 0, n) {
        rep(j, 0, m) {
            if(isTakCode(i, j)) ans.push_back(make_pair(i, j));
        }
    }

    rep(i, 0, ans.size()) {
        cout << ans[i].first + 1 << ' ' << ans[i].second + 1 << endl;
    }
    return 0;
} 