#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> x(m);
    vector<int> d(m-1);
    rep(i, 0, m) cin >> x[i];
    sort(x.begin(), x.end(), greater<int>());
    rep(i, 0, m-1) {
        d[i] = abs(x[i+1]-x[i]);
    }
    sort(d.begin(), d.end());

    if(n >= m) {
        cout << 0 << endl;
    } else {
        long long ans = 0;
        int to = (m-1)-(n-1);
        rep(i, 0, to) {
            ans += d[i];
        }
        cout << ans << endl;
    }

    return 0;
} 