#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int h, w;
    cin >> h >> w;
    vector<vector<char>> a(h, vector<char>(w));
    rep(i, 0, h) {
        rep(j, 0, w) {
            cin >> a[i][j];
        }
    }

    vector<vector<int>> b(2, vector<int>(500));
    int cnt = 0;
    rep(i, 0, h) {
        rep(j, 0, w){
            if(a[i][j] == '#') {
                cnt++;
            }
            b[0][i] = cnt;
        }
        cnt = 0;
    }
    rep(j, 0, w) {
        rep(i, 0, h){
            if(a[i][j] == '#') {
                cnt++;
            }
            b[1][j] = cnt;
        }
        cnt = 0;
    }

    int x = 0;
    int x_max = *max_element(b[1].begin(), b[1].end());
    int y = 0;
    int y_max = *max_element(b[0].begin(), b[0].end());

    rep(i, 0, 2) {
        rep(j, 0, 500) {
            if(b[i][j] == 0) continue;
            if(i == 0 && b[i][j] != y_max) y = j+1;
            if(i == 1 && b[i][j] != x_max) x = j+1;
        }
    }

    cout << y << " " << x << endl;

    return 0;
} 