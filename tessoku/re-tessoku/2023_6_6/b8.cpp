#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int sum[1509][1509];

int main(){
    int n;
    cin >> n;

    int itr = 1509;
    rep(i, 0, itr) rep(j, 0, itr) sum[i][j] = 0;
    rep(i, 0, n){
        int x, y;
        cin >> x >> y;
        sum[x][y]++;
    }
    rep(i, 1, itr) rep(j, 1, itr) sum[i][j] += sum[i][j-1];
    rep(j, 1, itr) rep(i, 1, itr) sum[i][j] += sum[i-1][j];
    
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