#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;
 
int main(){
    int h, w, n;
    cin >> h >> w >> n;
    vector<vector<int>> sum(h+2, vector<int>(w+2, 0));
    rep(i, 0, n){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        sum[a][b]++;
        sum[c+1][d+1]++;
        sum[c+1][b]--;
        sum[a][d+1]--;
    }
    rep(i, 1, h+1) rep(j, 1, w+1) sum[i][j] += sum[i][j-1];
    rep(j, 1, w+1) rep(i, 1, h+1) sum[i][j] += sum[i-1][j];
    rep(i, 1, h+1) {
        rep(j, 1, w+1) {
			cout << sum[i][j] << " ";
        }
        cout << endl;
    }
 
    return 0;
} 