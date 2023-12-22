#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;
    vector<long long> a(n);
    rep(i, 0, n) cin >> a[i];
    long long ans = 0;
    int r = 0;
    long long sum = 0;
    rep(l, 0, n) {
        while(sum < k) {
            if(r==n) break;
            sum +=a[r];
            r++;
        }
        if(sum<k) break;
        ans+=(n-r+1);
        sum-=a[l];
    }
    cout << ans << endl;
    return 0;
} 