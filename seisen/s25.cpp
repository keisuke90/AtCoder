#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;
int w, h;
vector<vector<int> > vec;
vector<vector<bool> > visited;
int dx[8] = {0, 1, 1, 1, 0, -1, -1, -1};
int dy[8] = {-1, -1, 0, 1, 1, 1, 0, -1};

void dfs(int x, int y) {
    visited[y][x] = true;

    rep(i, 0, 8) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx >= 0 && nx < w && ny >= 0 && ny < h) {
            if(!visited[ny][nx] && vec[ny][nx] == 1) {
                dfs(nx, ny);
            }
        }
    }
}

int main(){
    while(true) {
        cin >> w >> h;
        if(w == 0 && h == 0) {
            break;
        }
        vec = vector<vector<int> > (h, vector<int>(w));
        visited = vector<vector<bool> > (h, vector<bool>(w));

        rep(i, 0, h) {
            rep(j, 0, w) cin >> vec[i][j];
        }

        int cnt = 0;
        rep(i, 0, h) {
            rep(j, 0, w) {
                if(!visited[i][j] && vec[i][j] == 1) {
                    cnt++;
                    dfs(j, i);
                }
            }
        }
        cout << cnt << endl;
    }

    return 0;
} 