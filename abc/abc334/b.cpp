#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    long long a, m, l, r;
    cin >> a >> m >> l >> r;
    l -= a;
    r -= a;

    if(l < 0) {
        long long X = -l/m+1;
        l += X*m;
        r += X*m;
    }
    long long ans = r/m - (l-1)/m;
    cout << ans << endl;

    return 0;
} 