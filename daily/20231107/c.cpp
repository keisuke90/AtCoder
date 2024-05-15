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

    double ans = 0;
    rep(i, 0, n-1) {
        rep(j, i+1, n) {
            double dist = sqrt((x[j]-x[i])*(x[j]-x[i]) + (y[j]-y[i])*(y[j]-y[i]));
            ans = max(ans, dist);
        }
    }
    cout << fixed << setprecision(10) << ans << endl;

    return 0;
} 