#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    int ans = 0;
    int min_n = 1000;
    rep(i, 0, n) {
        int s;
        cin >> s;
        if(s%10!=0) min_n = min(min_n, s);
        ans+=s;
    }
    if(min_n==1000) cout << 0 << endl;
    else if(ans%10==0) cout << ans-min_n << endl;
    else cout << ans << endl;
    return 0;
} 