#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int t, n;
    cin >> t >> n;
    vector<int> vec(t);
    rep(i, 0, n) {
        int l, r;
        cin >> l >> r;
        vec[l]++;
        vec[r]--;
    }
    rep(i, 1, t) {
        vec[i] += vec[i-1];
    }
    rep(i, 0, t) {
        cout << vec[i] << endl;
    }

    return 0;
} 