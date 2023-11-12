#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> x(n), y(n);
    rep(i, 0, n) cin >> x[i] >> y[i];
    vector<int> ord;
    rep(i, 0, n) ord.push_back(i);

    long double ans = 0;
    do {
        rep(i, 0, n-1) {
            int a = ord[i];
            int b = ord[i+1];

            long double dx = x[a] - x[b];
            long double dy = y[a] - y[b];

            ans += sqrt(dx*dx + dy*dy);
        }
    } while(next_permutation(ord.begin(), ord.end()));

    rep(i, 0, n) ans /= (i+1);
    printf("%.10Lf\n", ans);
    return 0;
} 