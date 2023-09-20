#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    vector<vector<int>> vec(3, vector<int>(3));
    rep(i, 0, 3) {
        rep(j, 0, 3) cin >> vec[i][j];
    }
    vector<int> x(3), y(3);

    rep(i, 0, 3) {
        y[i] = vec[0][i] - x[i];
    }
    rep(i, 0, 3) {
        x[i] = vec[i][0] - y[0];
    }

    bool ok = true;
    rep(i, 0, 3) {
        rep(j, 0, 3) {
            if(x[i] + y[j] != vec[i][j]) ok = false;
        }
    }
    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
} 