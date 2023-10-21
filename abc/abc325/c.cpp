#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;
int h, w;
vector<string> vec;
vector<vector<bool>> visited;

void check(int i, int j) {
    visited[i][j] = true;
    if(i > 0 && j > 0 && vec[i-1][j-1] == '#' && !visited[i-1][j-1]) check(i-1, j-1);
    if(i > 0 && vec[i-1][j] == '#' && !visited[i-1][j]) check(i-1, j);
    if(i > 0 && j+1 < w && vec[i-1][j+1] == '#' && !visited[i-1][j+1]) check(i-1, j+1);
    if(j > 0 && vec[i][j-1] == '#' && !visited[i][j-1]) check(i, j-1);
    if(j+1 < w && vec[i][j+1] == '#' && !visited[i][j+1]) check(i, j+1);
    if(i+1 < h && j > 0 && vec[i+1][j-1] == '#' && !visited[i+1][j-1]) check(i+1, j-1);
    if(i+1 < h && vec[i+1][j] == '#' && !visited[i+1][j]) check(i+1, j);
    if(i+1 < h && j+1 < w && vec[i+1][j+1] == '#' && !visited[i+1][j+1]) check(i+1, j+1);
}

int main(){
    cin >> h >> w;
    vec = vector<string>(h);
    visited = vector<vector<bool>>(h, vector<bool>(w));
    rep(i, 0, h) cin >> vec[i];
    int ans = 0;

    rep(i, 0, h) {
        rep(j, 0, w) {
            if (vec[i][j] == '#' && !visited[i][j]) {
                ans++;
                check(i, j);
            }
        }
    }

    cout << ans << endl;
    return 0;
} 