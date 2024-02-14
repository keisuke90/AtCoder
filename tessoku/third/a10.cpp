#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> vec(100009);
    rep(i, 1, n+1) cin >> vec[i];
    vector<int> l_m(100009), r_m(100009);
    rep(i, 1, n+1) l_m[i] = max(l_m[i-1], vec[i]);
    for(int i = n; i>=1; i--) r_m[i] = max(r_m[i+1], vec[i]);

    int d;
    cin >> d;
    rep(i, 0, d) {
        int l, r;
        cin >> l >> r;
        int ans = max(l_m[l-1], r_m[r+1]);
        cout << ans << endl;
    }


    return 0;
} 