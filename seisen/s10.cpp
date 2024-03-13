#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, q;
    cin >> n;
    vector<int> vec(n);
    rep(i, 0, n) cin >> vec[i];
    cin >> q;

    vector<int> Q(q);
    rep(i, 0, q) cin >> Q[i];

    map<int, bool> mp;
    rep(bit, 0, (1<<n)) {
        int sum = 0;
        rep(i, 0, n) {
            if(bit & (1<<i)) sum+=vec[i];
        }
        mp[sum] = true;
    }

    rep(i, 0, q) {
        if(mp[Q[i]]) cout << "yes" << endl;
        else cout << "no" << endl;
    }
    return 0;
} 