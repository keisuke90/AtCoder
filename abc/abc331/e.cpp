#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, m, l;
    cin >> n >> m >> l;
    vector<long long> a(n);
    vector<pair<int, long long>> b(m);
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, m) {
        long long b_v;
        cin >> b_v;
        pair<int, long long> p = {i, b_v};
        b[i]=p;
    }
    sort(b.begin(), b.end(), [](auto &left, auto &right) {
        return left.second > right.second;
    });
    map<pair<int, int>, bool> c;
    rep(i, 0, l) {
        int l_c, l_d;
        cin >> l_c >> l_d;
        l_c--;
        l_d--;
        pair<int, int> p = {l_c, l_d};
        c[p]=true;
    }
    long long ans = 0;
    rep(i, 0, n) {
        for(auto v : b) {
            if(!c[{i, v.first}]) {
                ans = max(ans, a[i]+v.second);
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
} 