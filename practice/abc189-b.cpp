#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    long long n, x;
    cin >> n >> x;
    x*=100;
    long long d = 0;
    int ans = -1;
    rep(i, 1, n+1) {
        long long v, p;
        cin >> v >> p;
        long long drink = v*p;
        d+=drink;
        if(ans == -1 && d > x) ans = i;
    }

    cout << ans << endl;
    return 0;
} 