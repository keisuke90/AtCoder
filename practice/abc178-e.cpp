#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    long long max_x = -1e18, min_x = 1e18, max_y = -1e18, min_y = 1e18;
    rep(i, 0, n) {
        long long x, y;
        cin >> x >> y;
        max_x = max(max_x, x+y);
        min_x = min(min_x, x+y);
        max_y = max(max_y, x-y);
        min_y = min(min_y, x-y);
    }

    long long ans = max(abs(max_x - min_x), abs(max_y - min_y));
    cout << ans << endl;

    return 0;
} 