#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int k, n;
    cin >> k >> n;
    vector<int> a(n);
    rep(i,0,n) cin >> a[i];
    vector<int> dist(n);
    vector<int> dist2(n);


    int m = 0;
    rep(i, 0, n) {
        if(i == 0) {
            dist[i] = a[i]+k-a[n-1];
        } else {
            dist[i] = a[i] - a[i-1];
        }
        m = max(m, dist[i]);
    }

    int ans = 0;
    bool c = true;
    rep(i, 0, n) {
        if(c && dist[i] == m) {
            c = false;
            continue;
        }
        ans+=dist[i];
    }
    cout << ans << endl;
    return 0;
} 