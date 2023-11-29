#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int h, w;
vector<string> vec(20);
vector<int> y = {-1, 0, 1, 0};
vector<int> x = {0, 1, 0, -1};
int ans = 0;

int main(){
    cin >> h >> w;
    rep(i, 0, h) cin >> vec[i];

    rep(i, 0, h) {
        rep(j, 0, w) {
            vector<vector<int>> visited(h, vector<int>(w, -1));
            queue<pair<int, int>> q;
            visited[i][j] = 0;
            int tmp = 0;
            q.push({i, j});
            while(!q.empty()) {
                pair<int, int> pos = q.front(); q.pop();
                if(vec[pos.first][pos.second] == '#') continue;
                rep(l, 0, 4) {
                    pair<int, int> to = {pos.first+y[l], pos.second+x[l]};
                    if(to.first < 0 || to.first >= h || to.second < 0 || to.second >= w) continue;
                    if(vec[to.first][to.second] == '#') continue;
                    if(visited[to.first][to.second] != -1) continue;
                    visited[to.first][to.second] = visited[pos.first][pos.second]+1;
                    tmp = max(tmp, visited[to.first][to.second]);
                    q.push(to);
                }
            }
            ans = max(ans, tmp);
        }
    }
    cout << ans << endl;
    return 0;
} 