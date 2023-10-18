#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<int, int>> vec(n);
    rep(i, 0, n) {
        int l, r;
        cin >> l >> r;
        vec[i] = {l, r};
    }

    sort(vec.begin(), vec.end());

    int l = vec.begin()->first;
    int r = vec.begin()->second;
    for(auto [a, b] : vec) {
        if(r < a) {
            cout << l << ' ' << r << endl;
            l = a;
            r = b;
        } else {
            r = max(r, b);
        }
    }

    cout << l << ' ' << r << endl;

    return 0;
} 