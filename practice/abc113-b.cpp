#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    long long n, t, a;
    cin >> n >> t >> a;
    vector<long long> h(n);
    rep(i, 0, n) cin >> h[i];
    a*=1000;
    t*=1000;
    long long ans = 0;
    long long c = 6;
    long long ondo = 100000000000;

    rep(i, 0, n) {
        ondo = min(ondo, abs(a-(t-h[i]*c)));
        if(ondo == abs(a-(t-h[i]*c))) ans=i+1;
    }
    cout << ans << endl;
    return 0;
} 