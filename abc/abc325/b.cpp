#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n; 
    cin >> n;
    vector<long long> vec(24);
    rep(i, 0, n) {
        int w, x;
        cin >> w >> x;
        rep(j, 9, 18) {
            vec[(j+x)%24] += w;
        }
    }

    long long ans = 0;
    rep(i, 0, 24) {
        ans = max(ans, vec[i]);
    }
    cout << ans << endl;

    return 0;
} 