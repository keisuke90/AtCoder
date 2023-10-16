#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int n;
vector<int> t;
vector<vector<int>> a;
vector<bool> visited;
long long ans = 0;

void count(int x) {
    visited[x] = true;
    ans += t[x];
    if(a[x].size() == 0) return;
    while(a[x].size() > 0) {
        int next = a[x].back();
        a[x].pop_back();
        if(visited[next]) continue;
        count(next);
    }
}

int main(){
    cin >> n;
    t = vector<int>(n+1);
    a = vector<vector<int>>(n+1, vector<int>());
    visited = vector<bool> (n+1);

    rep(i, 1, n+1) {
        cin >> t[i];
        int k;
        cin >> k;
        rep(j, 0, k) {
            int tmp;
            cin >> tmp;
            a[i].push_back(tmp);
        }
    }

    count(n);

    cout << ans << endl;
    return 0;
} 