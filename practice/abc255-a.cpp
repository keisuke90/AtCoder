#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int r, c;
    cin >> r >> c;
    vector<vector<int>> vec(2, vector<int>(2));
    rep(i, 0,2) {
        rep(j, 0, 2) cin >> vec[i][j];
    }
    cout << vec[r-1][c-1] << endl;
    return 0;
} 