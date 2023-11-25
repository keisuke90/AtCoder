#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> vec(n);
    rep(i, 0, n) cin >> vec[i];

    int ans = INFINITY;

    rep(bit, 0, 1<<(n-1)){
        int res = 0;
        int cur = vec[0];
        rep(i, 1, n) {
            if(bit & (1 << (i - 1))) {
                res ^= cur;
                cur = 0;
            }
            cur |= vec[i];
        }
        res ^= cur;
        ans = min(ans, res);
    }
    cout << ans << endl;
    return 0;
} 
