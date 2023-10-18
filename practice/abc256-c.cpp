#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int h1, h2, h3, w1, w2, w3;
    cin >> h1 >> h2 >> h3 >> w1 >> w2 >> w3;
    vector<vector<int>> H1, H2, H3;

    rep(i, 1, h1-1) {
        rep(j, 1, h1-1) {
            if(i + j >= h1) break;
            H1.push_back({i, j, (h1-i-j)});
        }
    }
    rep(i, 1, h2-1) {
        rep(j, 1, h2-1) {
            if(i + j >= h2) break;
            H2.push_back({i, j, (h2-i-j)});
        }
    }
    rep(i, 1, h3-1) {
        rep(j, 1, h3-1) {
            if(i + j >= h3) break;
            H3.push_back({i, j, (h3-i-j)});
        }
    }

    long long ans = 0;
    rep(i, 0, H1.size()) {
        rep(j, 0, H2.size()) {
            rep(k, 0, H3.size()) {
                if(
                    H1[i][0]+H2[j][0]+ H3[k][0] == w1 &&
                    H1[i][1]+H2[j][1]+ H3[k][1] == w2 &&
                    H1[i][2]+H2[j][2]+ H3[k][2] == w3 
                ) ++ans;
            }
        }
    }
    cout << ans << endl;
    return 0;
} 