#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    // map<int, int> mp;
    vector<int> a(n+1), pos(n+1);

    rep(i, 1, n+1) {
        cin >> a[i];
        pos[a[i]] = i;
        // mp[a[i]] = i;
    }

    vector<pair<int, int>> ans;
    rep(i, 1, n+1) {
        if(a[i] == i) continue;
        // int j = mp[i];
        int j = pos[i];
        ans.push_back({i, j});
        swap(a[i], a[j]);
        swap(pos[a[i]], pos[a[j]]);
        // mp[a[i]] = i;
        // mp[a[j]] = j; 
    }

    cout << ans.size() << endl;
    for(auto p : ans) {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
} 