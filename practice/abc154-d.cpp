#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> p(n);
    rep(i, 0, n) cin >> p[i];
    rep(i, 0, n) p[i]++;
    int mx = 0;
    int s = 0;
    queue<int> q;
    rep(i, 0, n) {
        s += p[i];
        q.push(p[i]);
        if(q.size() > k) {
            s -= q.front(); q.pop();
        }
        if(q.size() == k) {
            mx = max(mx, s);
        }
    }
    double ans = mx;
    ans /= 2;
    printf("%.10f", ans);
    return 0;
}