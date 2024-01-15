#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> vec(n), left(n, 1), right(n, 1);

    rep(i, 0, n) cin >> vec[i];

    rep(i, 1, n) {
        left[i] = min(vec[i], left[i-1]+1);
    }
    for(int i = n-2; i>=0; i--) {
        right[i] = min(vec[i], right[i+1]+1);
    }

    int ans = 0;
    rep(i, 0, n) {
        int tmp = min(left[i], right[i]);
        ans = max(ans, tmp);
    }
    cout << ans << endl;
    return 0;
} 