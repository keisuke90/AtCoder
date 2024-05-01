#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int h, w, si, sj;
    cin >> h >> w;
    int di[] = {-1, 0, 1, 0};
    int dj[] = {0, 1, 0, -1};
    vector<vector<char>> g(h, vector<char>(w));
    vector<vector<int>> used(h, vector<int>(w, -1));
    rep(i, 0, h) {
        rep(j, 0, w) {
            cin >> g[i][j];
            if(g[i][j] == 'S') si = i, sj = j;
        }
    }

    queue<pair<int, int>> q;
    q.push({si, sj});
    used[si][sj] = 5;
    while(!q.empty()) {
        int i = q.front().first;
        int j = q.front().second;
        q.pop();

        if(si == i && sj == j) {
            rep(k, 0, 4) {
                int ni = i+di[k];
                int nj = j+dj[k];
                if(ni < 0 || ni >= h || nj < 0 || nj >= w) continue;
                if(g[ni][nj] == '#') continue;
                used[ni][nj] = k+1;
                q.push({ni, nj});
            }
        } else {
            rep(k, 0, 4) {
                int ni = i+di[k];
                int nj = j+dj[k];
                if(ni < 0 || ni >= h || nj < 0 || nj >= w) continue;
                if(g[ni][nj] == '#') continue;
                if(ni == si && nj == sj) continue;
                if(used[ni][nj] == -1) {
                    used[ni][nj] = used[i][j];
                    q.push({ni, nj});
                } else {
                    if(used[ni][nj] == used[i][j]) continue;
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "No" << endl;
    return 0;
} 