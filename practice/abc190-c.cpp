#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<pair<int ,int>> vec(m);
    rep(i, 0, m) {
        int a, b;
        cin >> a >> b;
        vec[i] = make_pair(a, b);
    }
    int k; 
    cin >> k;
    vector<pair<int, int>> K(k);
    rep(i, 0, k) {
        int a, b;
        cin >> a >> b;
        K[i] = make_pair(a, b);
    }

    int ans = 0;
    for(int bit = 0; bit < 1 << k; bit++) {
        vector<bool> ball(n);
        for(int i = 0; i < k; i++) {
            const auto [c, d] = K[i];
            ball[bit & 1 << i ? c : d] = 1;
        }
        int cnt = 0;
        for(auto [a, b] : vec) if(ball[a] && ball[b]) cnt++;
        if(ans < cnt) ans = cnt;
    }
    cout << ans << endl;
    return 0;
} 