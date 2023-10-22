#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    long long n, iq, xq;
    cin >> n;
    map<long long, pair<long long, long long>> mp;
    rep(i, 1, n+1) {
        int a;
        cin >> a;
        mp[i] = {0, a};
    }
    pair<int, long long> p = {0, 0};
    long long q;
    cin >> q;

    rep(i, 0, q) {
        long long Q;
        cin >> Q;
        if(Q == 1) {
            cin >> xq;
            p.first += 1;
            p.second = xq;
        } else if (Q == 2) {
            cin >> iq >> xq;
            if(mp[iq].first == p.first) {
                mp[iq].second += xq;

            } else {
                mp[iq].first = p.first;
                mp[iq].second = p.second + xq;
            }
        } else if (Q == 3) {
            cin >> iq;
            if(mp[iq].first == p.first) {
                cout << mp[iq].second << endl;
            } else {
                cout << p.second << endl;
            }
        }
    }

    return 0;
} 