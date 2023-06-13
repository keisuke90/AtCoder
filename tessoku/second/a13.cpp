#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;
int n, k;
int a[100009],r[100009];

int main(){
    cin >> n >> k;
    rep(i, 1, n+1) cin >> a[i];

    rep(i, 1, n){
        if(i==1) r[i] = 1;
        else r[i] = r[i-1];

        while(r[i] < n && a[r[i]+1]-a[i] <= k) r[i] +=1;
    }

    long long ans = 0;
    rep(i, 1, n) ans += (r[i]-i);
    cout << ans << endl;
    return 0;
} 