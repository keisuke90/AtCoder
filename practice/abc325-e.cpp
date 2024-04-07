#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    long long n, a, b, c;
    cin >> n >> a >> b >>c;
    vector<vector<int>> d(n, vector<int>(n));
    rep(i, 0, n) {
        rep(j, 0, n) cin >> d[i][j];
    }

    const long long INF = 1e18;
    auto dijk = [&](int sv, long long b, long long c) {
        vector<long long> dist(n, INF);
        dist[sv] = 0;
        vector<bool> done(n);
        rep(i, 0, n) {
            pair<long long, int> best(INF, 0);
            rep(j, 0, n) {
                if(!done[i]) best = min(best, {dist[i], i});
            }
            int v = best.second;
            done[v] = true;
            rep(i, 0, n) {
                dist[i] = min(dist[i], dist[v]+d[v][i]*b+c);
            }
        }
        return dist;
    };

    auto d1 = dijk(0, a, 0);
    auto d2 = dijk(n-1, b, c);
    long long ans = INF;
    rep(i, 0, n) ans = min(ans, d1[i]+d2[i]);
    cout << ans << endl;

    return 0;
} 