#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int h, w;
    cin >> h >> w;
    vector<string> A(h), B(h);
    rep(i, 0, h) cin >> A[i];
    rep(i, 0, h) cin >> B[i];
    bool ok = true;
    pair pos = {0, 0};
    rep(i, 0, h) {
        pos.first++;
        rep(j, 0, w) {
            pos.second++;
            ok = true;
            rep(i, 0, h) {
                rep(j, 0, w) {
                    if(A[(i+pos.first)%h][(j+pos.second)%w] != B[i][j]) ok = false;
                }
            }
            if(ok) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
} 