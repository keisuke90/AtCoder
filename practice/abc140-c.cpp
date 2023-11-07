#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    int ans = 0;
    vector<int> b(n-1);
    rep(i, 0, n-1) cin >> b[i];

    ans+=b[0]+b[n-2];
    rep(i, 1, n-1) {
        ans += min(b[i], b[i-1]);
    }
    cout << ans << endl;
    return 0;
} 