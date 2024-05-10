#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> vec(24);
    rep(i, 0, n) {
        int w, x;
        cin >> w >> x;
        vec[x]+=w;
    }
    int ans = 0;
    rep(i, 0, 24) {
        int sum = 0;
        rep(j, 0, 9) {
            sum += vec[(i+j)%24];
        }
        ans = max(ans, sum);
    }
    cout << ans << endl;
    return 0;
} 