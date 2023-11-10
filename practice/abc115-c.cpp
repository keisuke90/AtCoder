#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<long long> vec(n+1);
    rep(i, 1, n+1) cin >> vec[i];
    sort(vec.begin(), vec.end());
    long long ans = 100000000000000000;
    rep(i, k, n+1) {
        ans = min(ans, vec[i] - vec[i-k+1]);
    }
    cout << ans << endl;

    return 0;
} 