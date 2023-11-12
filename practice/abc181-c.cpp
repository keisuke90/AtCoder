#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

bool check(pair<int, int>a, pair<int, int>b, pair<int, int>c) {
    int tmp1 = (a.first-b.first) * (b.second-c.second);
    int tmp2 = (b.first-c.first) * (a.second-b.second);
    return tmp1 == tmp2;
}

int main(){
    int n;
    cin >> n;
    vector<pair<int, int>> vec(n);
    rep(i, 0, n) {
        int x, y;
        cin >> x >> y;
        vec[i] = {x, y};
    }
    bool ok = false;
    rep(i, 0, n) {
        rep(j, i+1, n) {
            rep(k, j+1, n) {
                if(check(vec[i], vec[j], vec[k])) {
                    ok = true;
                }
            }
        }
    }

    cout << (ok ? "Yes" : "No") << endl;
    return 0;
} 