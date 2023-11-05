#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, m, x;
    cin >> n >> m >> x;
    vector<int> vec(n+1);
    rep(i, 0, m) {
        int a;
        cin >> a;
        vec[a]++;
    }

    int ans = 1000;
    int tmp = 0;
    rep(i, 0, x+1) {
        tmp+=vec[i];
    }
    ans = min(ans, tmp);
    tmp=0;
    rep(i, x, n+1) {
        tmp+=vec[i];
    }
    ans = min(ans, tmp);
    cout << ans << endl;
    return 0;
} 