#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    vector<int> q(9);
    cin >> n;

    rep(i, 0, n) {
        int a;
        cin >> a;
        q[a]++;
    }

    int ans = 600000;
    rep(i, 1, 9) {
        ans = min(ans, q[i]);
    }

    cout << ans << endl;
    return 0;
} 