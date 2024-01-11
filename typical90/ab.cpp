#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    int xy = 1009;

    vector<vector<int>> vec(xy, vector<int>(xy));

    rep(i, 0, n) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        vec[b][a]++;
        vec[d][c]++;
        vec[b][c]--;
        vec[d][a]--;

    }

    rep(i, 0, xy) {
        rep(j, 1, xy) {
            vec[i][j] += vec[i][j-1];
        }
    }
    rep(i, 0, xy) {
        rep(j, 1, xy) {
            vec[j][i] += vec[j-1][i];
        }
    }

    map<int, int> mp;

    rep(i, 0, xy) {
        rep(j, 0, xy) {
            mp[vec[i][j]]++;
        }
    }
    
    rep(i, 1, n+1) {
        cout << mp[i] << endl;
    }

    return 0;
} 