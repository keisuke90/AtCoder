#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int h, w, n;
    cin >> h >> w >> n;
    vector<vector<int>> vec(1509, vector<int>(1509));
    rep(i, 0, n) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        vec[a][b]++;
        vec[c+1][d+1]++;
        vec[a][d+1]--;
        vec[c+1][b]--;
    }
    rep(i, 1, h+1) {
        rep(j, 1, w+1) vec[i][j] += vec[i][j-1];
    }
    rep(i, 1, w+1) {
        rep(j, 1, h+1) vec[j][i] += vec[j-1][i];
    }
    rep(i, 1, h+1) {
        rep(j, 1, w+1) {
            cout << vec[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
} 