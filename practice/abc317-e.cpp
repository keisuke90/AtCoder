#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int h, w;
    cin >> h >> w;
    vector<vector<char>> vec(h, vector<char>(w));
    int sh = 0, sw = 0, gh = 0, gw = 0;
    rep(i, 0, h) {
        rep(j, 0, w) {
            cin >> vec[i][j];
            if(vec[i][j] == 'S') {
                sh = i;
                sw = j;
            }
            if(vec[i][j] == 'G') {
                gh = i;
                gw = j;
            }
        };
    }

    rep(i, 0, h) {
        bool ok = false;
        rep(j, 0, w) {
            if(vec[i][j] == '!') continue;
            else if(vec[i][j] == '>') ok = true;
            else if(ok && vec[i][j] == '.') vec[i][j] = '!';
            else ok = false;
        }
    }

    rep(i, 0, h) {
        bool ok = false;
        for(int j = w-1; j>=0; j--) {
            if(vec[i][j] == '!') continue;
            else if(vec[i][j] == '<') ok = true;
            else if(ok && vec[i][j] == '.' ) vec[i][j] = '!';
            else ok = false;
        }
    }

    rep(j, 0, w) {
        bool ok = false;
        rep(i, 0, h) {
            if(vec[i][j] == '!') continue;
            else if(vec[i][j] == 'v') ok = true;
            else if(ok && vec[i][j] == '.') vec[i][j] = '!';
            else ok = false;

        }
    }

    rep(j, 0, w) {
        bool ok = false;
        for(int i = h-1; i>=0; i--) {
            if(vec[i][j] == '!') continue;
            else if(vec[i][j] == '^') ok = true;
            else if(ok && vec[i][j] == '.') vec[i][j] = '!';
            else ok = false;
        }
    }


    vector<int> dy = {-1, 0, 1, 0}, dx = {0, 1, 0, -1};
    vector<vector<int>> visited(h, vector<int>(w, 1e9));
    queue<pair<int, int>> q;
    visited[sh][sw] = 0;
    q.push({sh, sw});
    while(!q.empty()) {
        int posy = q.front().first;
        int posx = q.front().second;
        q.pop();

        rep(i, 0, 4) {
            int nexty = posy + dy[i];
            int nextx = posx + dx[i];

            if(nexty >= 0 && nexty < h && nextx >= 0 && nextx < w && visited[nexty][nextx] == 1e9) {
                if(vec[nexty][nextx] == '.' || vec[nexty][nextx] == 'G') {
                    visited[nexty][nextx] = visited[posy][posx] + 1;
                    q.push({nexty, nextx});
                }
            }
        }
    }

    if(visited[gh][gw] == 1e9) cout << -1 << endl;
    else cout << visited[gh][gw] << endl;

    return 0;
} 