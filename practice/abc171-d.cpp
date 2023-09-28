#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    map<int, int> mp;
    long long sum = 0;
    rep(i, 0, n) {
        int a;
        cin >> a;
        mp[a] += 1;
        sum += a;
    }

    int q;
    cin >> q;
    rep(i, 0, q) {
        int b, c;
        cin >> b >> c;
        sum -= (long long)b * mp[b];
        sum += (long long)c * mp[b];
        mp[c] += mp[b];
        mp[b] = 0;
        cout << sum << endl;
    }

    return 0;
} 