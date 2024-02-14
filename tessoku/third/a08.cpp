#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int h, w;
    cin >> h >> w;
    vector<vector<int>> vec(1509, vector<int>(1509));
    rep(i, 1, h+1) {
        rep(j, 1, w+1) {
            cin >> vec[i][j];
        }
    }

    rep(i, 1, h+1) {
        rep(j, 1, w+1) vec[i][j] += vec[i][j-1];
    }
    rep(i, 1, w+1) {
        rep(j, 1, h+1) vec[j][i] += vec[j-1][i];
    }

    int q;
    cin >> q;
    rep(i, 0, q) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int calc = vec[a-1][b-1] - vec[a-1][d] - vec[c][b-1] + vec[c][d];
        cout << calc << endl;
    }
    

    return 0;
} 