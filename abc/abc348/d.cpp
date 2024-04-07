#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int h, w;
    cin >> h >> w;
    int sh, sw, th, tw;
    vector<vector<char>> vec(h, vector<char>(w));
    rep(i, 0, h) {
        rep(j, 0, w) {
            cin >> vec[i][j];
            if(vec[i][j] == 'S') sh = i, sw = j;
            if(vec[i][j] == 'T') th = i, tw = j;
        }
    }

    int n;
    cin >> n;
    vector<vector<int>> kusuri(h, vector<int>(w, -1));
    rep(i, 0, n) {
        int r, c, e;
        cin >> r >> c >> e;
        r--; c--;
        kusuri[r][c] = e;
    }

    vector<int> dy = {-1, 0, 1, 0};
    vector<int> dx = {0, 1, 0, -1};

    vector<vector<int>> visited(h, vector<int>(w, -1));
    queue<vector<int>> q;
    q.push({sh, sw, 0});

    while(!q.empty()) {
        auto pos = q.front(); q.pop();
        int y = pos[0], x = pos[1], hp = pos[2];
        
        if(hp > visited[y][x]) visited[y][x] = hp;
        else continue;
        
        if(y == th && x == tw) {
            cout << "Yes" << endl;
            return 0;
        }
        hp = max(hp, kusuri[y][x]);
        
        rep(i, 0, 4) {
            int ny = y + dy[i];
            int nx = x + dx[i];
            if(ny < 0 || ny >= h || nx < 0 || nx >= w) continue;
            if(vec[ny][nx] == '#') continue;
            q.push({ny, nx, hp-1});
        }
    }
    cout << "No" << endl;
    return 0;
}
