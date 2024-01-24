#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> x(n), y(n);
    rep(i, 0, n) {
        cin >> x[i] >> y[i];
    }
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());
    long long ans = 0;
    rep(i, 0, n) {
        ans += abs(x[i]-x[n/2]);
        ans += abs(y[i]-y[n/2]);
    }
    cout << ans << endl;

    return 0;
} 