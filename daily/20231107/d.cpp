#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int r, c;
    cin >> r >> c;
    vector<vector<char>> vec(r, vector<char>(c));
    rep(i, 0, r) {
        rep(j, 0, c) cin >> vec[i][j];
    }

    rep(i, 0, r) {
        rep(j, 0, c) {
            if(vec[i][j] == '.') continue;
            if(vec[i][j] == '#') continue;

            int b = vec[i][j] - '0';
            for (int ni = 0; ni < r; ni++) {
                for (int nj = 0; nj < c; nj++) {
                    if (abs(i - ni) + abs(j - nj) <= b && vec[ni][nj] == '#') vec[ni][nj] = '.';
                }
            }
        }
    }

    rep(i, 0, r) {
        rep(j, 0, c) {
            if(vec[i][j] == '#') cout << '#';
            else cout << '.';
        }
        cout << endl;
    }

    return 0;
} 