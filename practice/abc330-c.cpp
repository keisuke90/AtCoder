#include <bits/stdc++.h>
#define rep(i, start, end) for(long long i = start; i < end; i++)
using namespace std;

int main(){
    long long d;
    cin >> d;
    long long ans = d;
    long long y = 2e6;
    rep(x, 0, 2e6) {
        while(x*x+y*y > d && y > 0) {
            y--;
        }
        ans = min(ans, abs(x*x+y*y-d));
        ans = min(ans, abs(x*x+(y+1)*(y+1)-d));
    }
    cout << ans << endl;
    return 0;
}  