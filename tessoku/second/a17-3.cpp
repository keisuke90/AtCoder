#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, a[100009], b[100009], dp[100009];
    cin >> n;
    rep(i, 2, n+1) cin >> a[i];
    rep(i, 3, n+1) cin >> b[i];

    dp[1] = 0;
    dp[2] = a[2];
    rep(i, 3, n+1) {
        dp[i] = min(dp[i-1]+a[i], dp[i-2]+b[i]);
    }

    vector<int> route;
    route.push_back(n);
    int i = n;
    while(true) {
        if(i == 1) break;
        if(dp[i]-a[i] == dp[i-1]) {
            route.push_back(i-1);
            i -= 1;
            continue;
        }
        if(dp[i]-b[i] == dp[i-2]) {
            route.push_back(i-2);
            i -= 2;
            continue;
        }
    }

    cout << route.size() << endl;
    reverse(route.begin(), route.end());
    rep(i, 0, route.size()) cout << route[i] << ' ';
    cout << endl;
    return 0;
} 