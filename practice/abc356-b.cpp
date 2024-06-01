#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    rep(i, 0, m) cin >> a[i];
    map<int, long long> mp;
    rep(i, 0, n) {
        rep(j, 0, m) {
            int x;
            cin >> x;
            mp[j] += x;
        }
    }


    rep(i, 0, m) {
        if(mp[i] < a[i]) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
} 