#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> a(n+1);
    map<long long, long long> mp;
    rep(i, 1, n+1) cin >> a[i] ;

    long long ans = 0;
    rep(i, 1, n+1) {
        ans += mp[i-a[i]];
        mp[i+a[i]]++;
    }
    cout << ans << endl;
    return 0;
} 