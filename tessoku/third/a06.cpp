#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, q;
    cin >> n >> q;
    vector<int> vec(n+1);
    rep(i, 1, n+1) cin >> vec[i];
    rep(i, 1, n+1) vec[i] += vec[i-1];

    rep(i, 0, q) {
        int l, r;
        cin >> l >> r;
        cout << vec[r] - vec[l-1] << endl;
    }

    return 0;
} 