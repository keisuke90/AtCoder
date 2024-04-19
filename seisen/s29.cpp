#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int r, c, sy, sx, gy, gx;
    cin >> r >> c >> sy >> sx >> gy >> gx;
    vector<vector<char>> vec(r, vector<char>(c));
    sy--; sx--; gy--; gx--;
    rep(i, 0, r) {
        rep(j, 0, c) cin >> vec[i][j];
    }

    vector<vector<int>> route(r, vector<int>(c, -1));
    queue<tuple<int, int, int>> q;
    q.push({sy, sx, 0});
    int dy[] = {-1, 0, 1, 0}, dx[] = {0, 1, 0, -1};

    int y, x, now;
    while(!q.empty()) {
        tie(y, x, now) = q.front();
        q.pop();
        if(y == gy && x == gx) break;

        rep(i, 0, 4) {
            int ny = y + dy[i];
            int nx = x + dx[i];
            if(ny > 0 && ny < r-1 && nx > 0 && nx < c-1) {
                if(route[ny][nx] == -1 && vec[ny][nx] == '.') {
                    route[ny][nx] = now + 1;
                    q.push({ny, nx, now+1});
                }
            }
        }
    }

    cout << route[gy][gx] << endl;
    return 0;
} 