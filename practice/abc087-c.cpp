#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> vec(2, vector<int>(n));
    rep(i, 0, n) cin >> vec[0][i];
    rep(i, 0, n) cin >> vec[1][i];

    int ans = 0;
    rep(i, 0, n) {
        int tmp = 0;
        rep(j, 0, n) {
            if(i > j) {
                tmp+=vec[0][j];
            } else if(i==j) {
                tmp+=vec[0][j]+vec[1][j];
            } else {
                tmp+=vec[1][j];
            }
        }
        ans=max(ans,tmp);
    }
    cout << ans << endl;
    return 0;
} 