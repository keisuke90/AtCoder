#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

const int INF = 1000000009;
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

int main(){
    int n;
    cin >> n;
    vector<vector<char>> s(n, vector<char>(n));
    int x1 = -1, y1 = -1, x2 = -1, y2 = -1;
    rep(i, 0, n) {
        rep(j, 0, n) {
            cin >> s[i][j];
            if(s[i][j] == 'P') {
                if(x1 == -1) {
                    x1 = i;
                    y1 = j;
                } else {
                    x2 = i;
                    y2 = j;
                }
            }
        }
    }

    vector dist(n, vector(n, vector(n, vector(n, INF))));
    queue<array<int, 4>> q;
    q.push({x1, y1, x2, y2});
    dist[x1][y1][x2][y2] = 0;
    while(!q.empty()) {
        array<int, 4> ar = q.front(); q.pop();
        rep(d, 0, 4) {
            array<int, 4> nxt = ar;
            nxt[0] += dx[d], nxt[1] += dy[d];
            if(nxt[0] < 0 || nxt[0] >= n || nxt[1] < 0 || nxt[1] >= n || s[nxt[0]][nxt[1]] == '#') {
                nxt[0] = ar[0];
                nxt[1] = ar[1];
            }
            nxt[2] += dx[d], nxt[3] += dy[d];
            if(nxt[2] < 0 || nxt[2] >= n || nxt[3] < 0 || nxt[3] >= n || s[nxt[2]][nxt[3]] == '#') {
                nxt[2] = ar[2];
                nxt[3] = ar[3];
            }
            if(dist[nxt[0]][nxt[1]][nxt[2]][nxt[3]] == INF) {
                dist[nxt[0]][nxt[1]][nxt[2]][nxt[3]] = dist[ar[0]][ar[1]][ar[2]][ar[3]] + 1;
                q.push(nxt);
            }
        }
    }

    int ans = INF;
    rep(i, 0, n) {
        rep(j, 0, n) {
            ans = min(ans, dist[i][j][i][j]);
        }
    }
    if(ans == INF) ans = -1;
    cout << ans << endl;

    return 0;
} 
