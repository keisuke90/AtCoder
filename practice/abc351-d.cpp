//  #include <bits/stdc++.h>
// #define rep(i, start, end) for(int i = start; i < end; i++)
// using namespace std;

// int main(){
//     int h, w;
//     cin >> h >> w;
//     vector<string> vec(h);
//     vector<vector<bool>> start(h, vector<bool>(w));
//     rep(i, 0, h) cin >> vec[i];



//     queue<pair<int, int>> q;
//     int dy[] = {-1, 0, 1, 0};
//     int dx[] = {0, 1, 0, -1};
//     int ans = 0;
//     rep(i, 0, h) {
//         rep(j, 0, w) {
//             if(vec[i][j] == '#') continue;
//             if(start[i][j]) continue;
//             vector<vector<bool>> used(h, vector<bool>(w));
//             used[i][j] = true;
//             start[i][j] = true;
//             q.push({i, j});
//             int cnt = 1;
//             while(!q.empty()) {
//                 int y = q.front().first;
//                 int x = q.front().second;
//                 q.pop();
//                 bool ok = true;
//                 rep(k, 0, 4) {
//                     int ny = y + dy[k];
//                     int nx = x + dx[k];
//                     if(ny >= 0 && ny < h && nx >= 0 && nx < w) {
//                         if(vec[ny][nx] == '#') ok = false;
//                     }
//                 }

//                 if(ok) {
//                     rep(k, 0, 4) {
//                         int ny = y+dy[k];
//                         int nx = x+dx[k];
//                         if(ny >= 0 && ny < h && nx >= 0 && nx < w) {
//                             if(used[ny][nx]) continue;
//                             q.push({ny, nx});
//                             used[ny][nx] = true;
//                             start[ny][nx] = true;
//                             cnt++;
//                         }
//                     }
//                 } else {
//                     start[y][x] = false;
//                 }

//             }
//             ans = max(ans, cnt);
//         }
//     }

//     cout << ans << endl;
//     return 0;
// } 

#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;
using P = pair<int, int>;

int di[] = {-1, 0, 1, 0};
int dj[] = {0, -1, 0, 1};

int main(){
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i, 0, h) cin >> s[i];
    vector x(h, vector<bool>(w));
    rep(i, 0, h) {
        rep(j, 0, w) {
            if(s[i][j] == '#') {
                x[i][j] = true;
                rep(v, 0, 4) {
                    int ni = i+di[v], nj = j+dj[v];
                    if(ni < 0 || ni >= h || nj < 0 || nj >= w) continue;
                    x[ni][nj] = true;
                }
            }
        }
    }

    vector used(h, vector<bool>(w));
    vector last(h, vector<int>(w));
    int tm = 0;
    int ans = 1;
    rep(si, 0, h) {
        rep(sj, 0, w) {
            if(x[si][sj]) continue;
            if(used[si][sj]) continue;
            tm++;
            int cnt = 0;
            queue<P> q;
            q.emplace(si, sj);
            used[si][sj] = true;
            while(!q.empty()) {
                auto [i, j] = q.front(); q.pop();
                cnt++;
                rep(v, 0, 4) {
                    int ni = i+di[v], nj = j+dj[v];
                    if(ni < 0 || ni >= h || nj < 0 || nj >= w) continue;
                    if(used[ni][nj]) continue;
                    if(x[ni][nj]) {
                        if(last[ni][nj] != tm) cnt++, last[ni][nj] = tm;
                        continue;
                    }
                    q.emplace(ni, nj);
                    used[ni][nj] = true;
                }
            }
            ans = max(ans, cnt);
        }
    }
    cout << ans << endl;
    return 0;
} 