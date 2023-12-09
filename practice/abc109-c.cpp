#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
    vector<int> vec(n);
    rep(i, 0, n) cin >> vec[i];
    vec.push_back(x);
    sort(vec.begin(), vec.end());
    vector<int> diff(n);
    rep(i, 0, n) diff[i] = vec[i+1]-vec[i];
    if(n==1) {
        cout << diff[0] << endl;
        return 0;
    }
    int ans = diff[0];
    rep(i, 1, n) {
        ans = gcd(ans, diff[i]);
    }
    cout << ans << endl;
    return 0;
} 