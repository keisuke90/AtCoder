#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> vec(1509, vector<int>(1509));
    rep(i, 0, n) {
        int a, b;
        cin >> a >> b;
        vec[a][b]++;
    }
    rep(i, 1, 1509) {
        rep(j, 1, 1509) vec[i][j] += vec[i][j-1];
    }
    rep(i, 1, 1509) {
        rep(j, 1, 1509) vec[j][i] += vec[j-1][i];
    }

    int q;
    cin >> q;
    rep(i, 0, q) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int sum = vec[a-1][b-1] + vec[c][d] - vec[c][b-1] - vec[a-1][d];
        cout << sum << endl;
    }

    return 0;
} 