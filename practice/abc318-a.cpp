#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, m, p;
    cin >> n >> m >> p;

    int ans = 0;
    if(n - m < 0) cout << 0 << endl;
    else {
        ans++;
        ans += (n-m)/p;
        cout << ans << endl;
    }
    return 0;
} 