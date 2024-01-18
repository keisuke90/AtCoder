#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;
int inf = 1e9;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int h, w, sx, sy, gx, gy;
vector<vector<vector<int>>> dist(1009, vector<vector<int>>(1009, vector<int>(4, inf)));
char S[1009][1009];
struct state {
    int x, y, dir;
};


int main(){
    cin >> h >> w >> sx >> sy >> gx >> gy;
    --sx, --sy, --gx, --gy;

    rep(i, 0, h) cin >> S[i];

    deque<state> deq;
    rep(i, 0, 4) {
        dist[sx][sy][i] = 0;
        deq.push_back({sx, sy, i});
    }

    while(!deq.empty()) {
        state u = deq.front(); deq.pop_front();
        rep(i, 0, 4) {
            int tx = u.x + dx[i];
            int ty = u.y + dy[i];
            int cost = dist[u.x][u.y][u.dir] + (u.dir != i ? 1 : 0);
            if(0 <= tx && tx < h && 0 <= ty && ty < w && S[tx][ty] == '.' && dist[tx][ty][i] > cost) {
                dist[tx][ty][i] = cost;
                if(u.dir != i) deq.push_back({tx, ty, i});
                else deq.push_front({tx, ty, i});
            }
        }
    }

    int ans = inf;
    rep(i, 0, 4) {
        ans = min(ans, dist[gx][gy][i]);
    }
    cout << ans << endl;

    return 0;
} 