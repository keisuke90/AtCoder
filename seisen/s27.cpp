#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;
int m, n;
vector<vector<int>> vec(99, vector<int>(99));
int dx[] = {0, 1, 0, -1}, dy[] = {-1, 0, 1, 0};
int ans = 0;

void dfs(int x, int y, int cnt, vector<vector<bool>> used) {
    used[x][y] = true;
    ans = max(ans, cnt);
    rep(i, 0, 4) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx >= 0 && nx < m && ny >= 0 && ny < n) {
            if(vec[nx][ny] && !used[nx][ny]) {
                dfs(nx, ny, cnt+1, used);
            }
        }
    }
    return;
}

int main(){
    cin >> m >> n;
    rep(i, 0, m) {
        rep(j, 0, n) cin >> vec[i][j];
    }

    rep(i, 0, m) {
        rep(j, 0, n) {
            vector<vector<bool>> used(99, vector<bool>(99));
            dfs(i, j, 0, used);
        }
    }

    cout << ans << endl;
    return 0;
} 