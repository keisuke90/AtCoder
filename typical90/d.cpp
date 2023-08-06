#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int h, w;
    vector<vector<int>> vec(2009, vector<int>(2009, 0));
    vector<int> tate(2009), yoko(2009);

    cin >> h >> w;
    rep(i, 0, h) {
        rep(j, 0, w) {
            cin >> vec[i][j];
        }
    }

    rep(i, 0, h) {
        rep(j, 0, w) {
            yoko[i] += vec[i][j];
        }
    }
    rep(i, 0, w) {
        rep(j, 0, h) {
            tate[i] += vec[j][i];
        }
    }


    rep(i, 0, h) {
        rep(j, 0, w) cout << yoko[i] + tate[j] - vec[i][j] << ' ';
        cout << endl;
    }
    return 0;
} 