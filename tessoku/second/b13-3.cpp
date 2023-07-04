#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;
int n, k;
int a[100009], s[100009], r[100009];

int main(){
    cin >> n >> k;
    rep(i, 1, n+1) cin >> a[i];
    s[0] = 0;
    rep(i, 1, n+1) s[i] = s[i-1] + a[i];

    rep(i, 1, n+1) {
        if(i == 1) r[i] = 0;
        else r[i] = r[i-1];
        while(r[i] < n && s[r[i]+1] - s[i-1] <= k) r[i]+=1;
    }
    long long ans = 0;
    rep(i, 1, n+1) ans += r[i] - i + 1;
    cout << ans << endl; 
    return 0;
} 