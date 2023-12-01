#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int h, w;
    cin >> h >> w;
    vector<string> vec(h);
    vector<vector<int>> ans(h, vector<int>(w));
    vector<int> x = {-1, 0, 1, -1, 1, -1, 0, 1};
    vector<int> y = {-1, -1, -1, 0, 0, 1, 1, 1};

    rep(i, 0, h) cin >> vec[i];

    rep(i, 0, h) {
        rep(j, 0, w) {
            if(vec[i][j]=='#') {
                rep(k, 0, 8) {
                    if(i+y[k]>=0 && i+y[k]<h && j+x[k]>=0 && j+x[k]<w) {
                        ans[i+y[k]][j+x[k]]++;
                    }
                }
            }
        }
    }

    rep(i, 0, h) {
        rep(j, 0, w) {
            if(vec[i][j]=='#') cout << vec[i][j];
            else cout << ans[i][j];
        }
        cout << endl;
    }

    return 0;
} 