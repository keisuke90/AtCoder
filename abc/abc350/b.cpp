#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, q;
    cin >> n >> q;
    vector<bool> vec(n+1, true);
    vec[0] = false;
    rep(i, 0, q) {
        int t;
        cin >> t;
        vec[t] = !vec[t];
    }

    int ans = 0;
    rep(i, 1, n+1) if(vec[i]) ans++;
    cout << ans << endl;

    return 0;
} 