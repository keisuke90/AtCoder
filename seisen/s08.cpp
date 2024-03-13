#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<long long, long long>> vec(n);
    set<long long> st;
    rep(i, 0, n) {
        long long a, b;
        cin >> a >> b;
        vec[i] = {a, b};
        st.insert(a);
        st.insert(b);
    }
    vector<long long> vec2;
    for(auto s : st) vec2.push_back(s);
    long long ans = 1e18 + 9;
    rep(i, 0, st.size()) {
        rep(j, i, st.size()) {
            long long tmp = 0;
            rep(k, 0, n) {
                tmp += abs(vec2[i] - vec[k].first) + abs(vec[k].first - vec[k].second) + abs(vec[k].second - vec2[j]);
            }
            ans = min(ans, tmp);
        }
    }
    cout << ans << endl;
    return 0;
} 