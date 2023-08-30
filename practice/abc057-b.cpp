#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> N(n), M(m);
    rep(i, 0, n) {
        int a, b;
        cin >> a >> b;
        N[i] = make_pair(a, b);
    }
    rep(i, 0, m) {
        int a, b;
        cin >> a >> b;
        M[i] = make_pair(a, b);
    }

    rep(i, 0, n) {
        long long d = 1e16;
        int ans = 0;
        rep(j, 0, m) {
            long long tmp = abs(N[i].first - M[j].first) + abs(N[i].second - M[j].second);
            if(tmp < d) {
                d = tmp;
                ans = j + 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
} 