#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> cnt(n, 2);
    rep(i, 0, k) {
        int a;
        cin >> a;
        a--;
        cnt[a]--;
    }

    vector<int> x;
    rep(i, 0, n) {
        rep(j, 0, cnt[i]) {
            x.push_back(i);
        }
    }

    n = x.size();
    if(n%2==0) {
        int ans = 0;
        rep(i, 0, n/2) ans += x[i*2+1]-x[i*2];
        cout << ans << endl;
    } else {
        int now = 0;
        rep(i, 0, n/2) now += x[i*2+2] - x[i*2+1];
        int ans = now;
        for(int i=2; i<n; i+=2) {
            now += x[i-1]-x[i-2];
            now -= x[i]-x[i-1];
            ans = min(ans, now);
        }
        cout << ans << endl;
    }
    return 0;
} 