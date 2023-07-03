#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int n, k;
int a[100009], r[100009];

int main(){
    cin >> n >> k;
    rep(i, 0, n) cin >> a[i];

    rep(i, 0, n-1) {
        if(i == 0) r[i] = 0;
        else r[i] = r[i-1];

        while(r[i] < n && a[r[i]] - a[i] <= k) r[i]+=1;
    }

    long long ans = 0;
    rep(i, 0, n) ans += r[i]-i;
    cout << ans << endl;

    return 0;
} 