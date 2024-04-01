#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> x(n), y(n);
    rep(i, 0, n) {
        cin >> x[i] >> y[i];
    }
    string s;
    cin >> s;

    map<int, pair<int, int>> mp;
    rep(i, 0, n) mp[y[i]] = {-1, -1};
    rep(i, 0, n) {
        if(s[i] == 'R') {
            if(mp[y[i]].first == -1) mp[y[i]].first = x[i];
            else mp[y[i]].first = min(mp[y[i]].first, x[i]);
        } else {
            mp[y[i]].second = max(mp[y[i]].second, x[i]);
        }
    }

    rep(i, 0, n) {
        if(mp[y[i]].first != -1 && mp[y[i]].second != -1) {
            if(mp[y[i]].first < mp[y[i]].second) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
} 