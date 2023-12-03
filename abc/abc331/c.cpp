#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, 0, n) cin >> a[i];
    const int M = 1000009;
    vector<vector<int>> is(M);;
    rep(i, 0, n) is[a[i]].push_back(i);

    vector<long long> ans(n);
    long long now = 0;
    for(int x = M-1; x>=1; x--) {
        for(int i : is[x]) ans[i] = now;
        now+= (long long)x * is[x].size();
    }

    rep(i, 0, n) cout << ans[i] << ' ';
    cout << endl;

    return 0;
} 