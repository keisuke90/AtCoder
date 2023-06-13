#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> sum(1509, vector<int>(1509, 0));
    rep(i, 0, n){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        sum[a+1][b+1]++;
        sum[c+1][b+1]--;
        sum[a+1][d+1]--;
        sum[c+1][d+1]++;
    }
    rep(i, 1, 1509) rep(j, 1, 1509) sum[i][j] += sum[i][j-1];
    rep(j, 1, 1509) rep(i, 1, 1509) sum[i][j] += sum[i-1][j];
    int cnt = 0;
    rep(i, 0, 1509) rep(j, 0, 1509) if(sum[i][j] > 0) cnt++;
    cout << cnt << endl;

    return 0;
} 