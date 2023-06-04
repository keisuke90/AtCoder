#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, d;
    cin >> n >> d;
    vector<int> x(n), y(n);
    rep(i, 0, n) cin >> x[i] >> y[i];
    auto near = [&](int a, int b) {
        int dx = x[a] - x[b];
        int dy = y[a] - y[b];
        return dx*dx + dy*dy <= d*d;
    };
    queue<int> q;
    vector<bool> ans(n);
    ans[0] = true;
    q.push(0);
    while(!q.empty()) {
        int v = q.front(); q.pop();
        rep(u, 0, n) {
            if(near(v, u)) {
                if(ans[u]) continue;
                ans[u] = true;
                q.push(u);
            }
        }
    }

    rep(i, 0, n) {
        if(ans[i]) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
} 