#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> vec(109, vector<int>(109));


    rep(i, 0, n) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        a++;
        c++;
        vec[a][c]++;
        vec[a][d+1]--;
        vec[b+1][c]--;
        vec[b+1][d+1]++;
    }

    rep(i, 1, 109) {
        rep(j, 1, 109) {
            vec[i][j] += vec[i][j-1];
        }
    }

    rep(i, 1, 109) {
        rep(j, 1, 109) {
            vec[j][i] += vec[j-1][i];
        }
    }

    int ans = 0;
    rep(i, 1, 101) {
        rep(j, 1, 101) {
            if(vec[i][j]) ans++;
        }
    }

    cout << ans << endl;
    return 0;
} 