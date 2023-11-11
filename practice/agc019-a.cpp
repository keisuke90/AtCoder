#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    long long q, h, s, d, n;
    cin >> q >> h >> s >> d >> n;

    q*=4;
    h*=2;
    long long ans = 0;
    s = min(q, min(h, s));
    if(2*s <= d) {
        ans = n*s;
    } else {
        if(n%2==1) {
            ans = d*(n/2)+s;
        } else {
            ans = d*(n/2);
        }
    }
    cout << ans << endl;
    return 0;
} 