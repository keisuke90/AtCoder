#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> q(m);
    rep(i, 0, m) cin >> q[i];
    vector<int> point(n, 0);
    int mp = 0;
    vector<string> s(n);
    rep(i, 0, n) {
        cin >> s[i];
        rep(j, 0, m) {
            if(s[i][j] == 'o') point[i] += q[j];
        }
        point[i] += i+1;
        mp = max(mp, point[i]);
    }
    rep(i, 0, n) {
        if(point[i] == mp) cout << 0 << endl;
        else
        {
            int tmp = mp - point[i];
            vector<int> tmp2;
            rep(j, 0, m) {
                if(s[i][j] == 'x') tmp2.push_back(q[j]);
            }
            sort(tmp2.begin(), tmp2.end(), greater<int>());
            rep(j, 0, m) {
                tmp -= tmp2[j];
                if(tmp < 0) {
                    cout << j+1 << endl;
                    break;
                }
            }
        }
    }
    return 0;
} 