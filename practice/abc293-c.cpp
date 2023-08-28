#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;
int h, w, ans;
vector<vector<int>> vec;

void dfs(int i, int j, set<int> s) {
    if (s.count(vec[i][j])) return;
    s.insert(vec[i][j]);
    if(i == h-1 && j == w-1) {
        ans++;
        return;
    }
    if(j+1 < w) dfs(i, j+1, s);
    if(i+1 < h) dfs(i+1, j, s);
}

int main(){
    cin >> h >> w;
    vec = vector(h, vector<int>(w));
    rep(i, 0, h) {
        rep(j, 0, w) cin >> vec[i][j];
    }
    dfs(0, 0, set<int>());
    cout << ans << endl;
    return 0;
} 