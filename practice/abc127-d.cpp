#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> vec(n);
    rep(i, 0, n) cin >> vec[i];
    sort(vec.begin(), vec.end());

    vector<pair<int, int>> D(m);
    rep(i, 0, m) {
        int b, c;
        cin >> b >> c;
        D[i] = {b, c};
    }
    sort(D.begin(), D.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second > b.second;
    });
    vector<int> d;
    for(auto v : D) {
        bool end = false;

        rep(i, 0, v.first) {
            if(d.size() >= n) {
                end = true;
                break;
            }
            d.push_back(v.second);
        }
        if(end) break;
    }
    while(d.size() < n) {
        d.push_back(0);
    }

    long long ans = 0;
    rep(i, 0, n) {
        ans += max(vec[i], d[i]);
    }

    cout << ans << endl;

    return 0;
} 