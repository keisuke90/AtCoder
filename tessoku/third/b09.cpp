#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> vec(1509, vector<int>(1509));
    rep(i, 0, n) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        vec[a][b]++;
        vec[a][d]--;
        vec[c][b]--;
        vec[c][d]++;
    }

    rep(i, 0, 1509) {
        rep(j, 1, 1509) vec[i][j] += vec[i][j-1];
    }
    rep(i, 0, 1509) {
        rep(j, 1, 1509) vec[j][i] += vec[j-1][i];
    }

    int ans = 0;
    rep(i, 0, 1501) {
        rep(j, 0, 1501) {
            if(vec[i][j]>0) ans++;
        }
    }
    cout << ans << endl;
    return 0;
} 