#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int a,b,c,x,y;
    cin>>a>>b>>c>>x>>y;

    long long ans = 1000000009;
    for(int i = 0; i <= max(x*2, y*2); i+=2) {
        long long asum = a * max(0, x-i/2);
        long long bsum = b * max(0, y-i/2);
        long long csum = c * i;
        ans = min(ans, asum+bsum+csum);
    }
    cout << ans << endl;
    return 0;
} 