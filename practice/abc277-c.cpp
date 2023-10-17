#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;
vector<bool> visited(1000000001);
map<int, vector<int>> mp;
int ans = 1;

void up(int pos) {
    if(!visited[pos]) return;
    while(mp[pos].size() > 0) {
        int next = mp[pos].back();
        visited[next] = true;
        ans = max(ans, next);
        mp[pos].pop_back();
        up(next);
    }
}

int main(){
    int n;
    cin >> n;
    rep(i, 0, n) {
        int a, b;
        cin >> a >> b;
        mp[a].push_back(b);
        mp[b].push_back(a);
    }

    visited[1] = true;
    up(1);

    cout << ans << endl;
    return 0;
} 