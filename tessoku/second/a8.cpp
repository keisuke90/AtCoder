#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int h, w;
    cin >> h >> w;
    vector<vector<int>> sum(h+1, vector<int>(w+1, 0));
    rep(i, 1, h+1){
        rep(j, 1, w+1){
            int x;
            cin >> x;
            sum[i][j] = x;
        }
    }
    rep(i, 1, h+1){
        rep(j, 1, w+1){
            sum[i][j] = sum[i][j] + sum[i][j-1];
        }
    }
    rep(j, 1, w+1){
        rep(i, 1, h+1){
            sum[i][j] = sum[i][j] + sum[i-1][j];
        }
    }

    int q;
    cin >> q;
    rep(i, 0, q){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int ans = sum[c][d] - sum[a-1][d] - sum[c][b-1] + sum[a-1][b-1];
        cout << ans << endl;
    }


    return 0;
} 