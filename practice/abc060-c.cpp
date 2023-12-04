#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    long long n, t;
    cin >> n >> t;
    long long ans = 0;
    vector<long long> T(n);
    rep(i, 0, n) cin >> T[i];
    rep(i, 1, n) {
        if(T[i]-T[i-1]>t) ans+=t;
        else ans += T[i]-T[i-1];
    }
    ans+=t;
    cout << ans << endl;
    return 0;
} 