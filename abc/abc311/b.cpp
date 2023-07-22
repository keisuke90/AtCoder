#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, d;
    cin >> n >> d;
    string s[109];
    rep(i, 0, n) cin >> s[i];
    vector<bool> ok(109, false);

    rep(i, 0, d) {
        bool check = true;
        rep(j, 0, n) {
            if(s[j][i] == 'x') {
                check = false;
                break;
            }
        }
        if(check) ok[i] = true;
    }

    int cnt = 0;
    int cntm = 0;
    rep(i, 0, d) {
        if(ok[i]) {
            cnt++;
            cntm = max(cnt, cntm);
        } else {
            cnt = 0;
        }
    }

    cout << cntm << endl;
    return 0;
} 