#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    rep(i, 0, n) cin >> a[i];
    sort(a.begin(), a.end());
    rep(i, 0, q) {
        int x;
        cin >> x;
        int idx = lower_bound(a.begin(), a.end(), x) - a.begin();
        cout << n-idx << endl;
    }

    return 0;
} 