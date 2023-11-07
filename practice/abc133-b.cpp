#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, d;
    cin >> n >> d;
    vector<vector<int>> vec(n, vector<int>(d));
    rep(i, 0, n) {
        rep(j, 0, d) {
            cin >> vec[i][j];
        }
    }
    int cnt = 0;
    rep(i, 0, n-1) {
        rep(j, i+1, n) {
            int tmp = 0;
            rep(k, 0, d) {
                tmp += (vec[i][k] - vec[j][k]) * (vec[i][k] - vec[j][k]);
            }
            int root = sqrt(tmp);
            if(tmp == root*root) cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
} 