#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int h, w;
vector<vector<char>> vec(20, vector<char>(20));
vector<vector<bool>> visited(20, vector<bool>(20));
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0 , -1, 0};

int dfs(int sx, int sy, int px, int py) {
    if(sx==px && sy==py && visited[px][py]) return 0;
    visited[px][py] = true;

    int res = -100000000;
    rep(i, 0, 4) {
        int nx = px + dx[i];
        int ny = py + dy[i];
        if(nx < 0 || ny < 0 || nx > h-1 || ny > w-1 || vec[nx][ny] == '#') continue;
        if((sx != nx || sy != ny) && visited[nx][ny]) continue;
        int v = dfs(sx, sy, nx, ny);
        res = max(res, v+1);
    }

    visited[px][py] = false;
    return res;
}

int main(){
    cin >> h >> w;

    rep(i, 0, h) {
        rep(j, 0, w) cin >> vec[i][j];
    }

    int ans = -1;

    rep(i, 0, h) {
        rep(j, 0, w) {
            ans = max(ans, dfs(i, j, i, j));
        }
    }

    if(ans <= 2) ans = -1;
    cout << ans << endl;

    return 0;
} 