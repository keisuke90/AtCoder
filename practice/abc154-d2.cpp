#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<double> vec(n+1), vec2;
    rep(i, 1, n+1) cin >> vec[i];
    vec2 = vec;
    rep(i, 1, n+1) vec2[i]+=vec2[i-1];
    int x = 0;
    int xx = 0;
    rep(i, 0, n-k+1) {
        int tmp = vec2[i+k]-vec2[i];
        x = max(x, tmp);
        if(tmp == x) xx = i+1;
    }
    double ans = 0.0;
    rep(i, xx, xx+k) {
        ans += vec[i]*0.5+0.5;
    }
    printf("%.10f", ans);
    return 0;
} 