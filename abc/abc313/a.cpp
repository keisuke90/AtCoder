#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    int p[109];
    map<int, int> mp;
    cin >> n;
    int m = 0;
    rep(i, 1, n+1) {
        int P;
        cin >> P;
        p[i] = P;
        mp[P] += 1;
        m = max(m, P);
    }   

    int ans = m - p[1] +1;
    if(p[1]==m && mp[m] == 1) {
        cout << 0 << endl;
        return 0;
    } else if(p[1] == m && mp[m] >=2) {
        cout << 1 << endl;
        return 0;
    }

    cout << ans << endl;

    return 0;
} 