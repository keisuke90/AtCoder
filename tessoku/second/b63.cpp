#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    vector<pair<int, int>> around = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
    int r, c, sy, sx, gy, gx;
    cin >> r >> c >> sy >> sx >> gy >> gx;
    vector<vector<char>> s(59, vector<char>(59));
    queue<pair<int, int>> q;
    vector<vector<int>> dist(59, vector<int>(59, -1));
    
    rep(i, 1, r+1) {
        string S;
        cin >> S;
        rep(j, 1, c+1) {
            s[i][j] = S[j-1];
        }
    }

    dist[sy][sx] = 0;
    q.push({sy, sx});
    while(!q.empty()) {
        pair<int, int> pos = q.front();
        q.pop();
        rep(i, 0, around.size()) {
            pair<int, int> to = {pos.first + around[i].first, pos.second + around[i].second};
            if(s[to.first][to.second] == '.' && dist[to.first][to.second] == -1) {
                dist[to.first][to.second] = dist[pos.first][pos.second] + 1;
                q.push(to);
            }
        }
    }

    cout << dist[gy][gx] << endl;

    return 0;
} 