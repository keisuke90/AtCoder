#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    long long x, a, d, n;
    cin >> x >> a >> d >> n;

    if(d < 0) {
        a = a+d*(n-1);
        d *= -1;
    }

    long long l = 0;
    long long r = n-1;
    while(l<=r) {
        long long mid = (l+r)/2;
        if((a+d*mid) < x) {
            l = mid+1;
        } else {
            r = mid-1;
        }
    }
    long long ans = 8e18;
    for(long long i = max(0ll, r-5); i<=min((n-1), l+5); i++) {
        ans = min(ans, abs(a+d*i-x));
    }
    cout << ans << endl;
    return 0;
} 