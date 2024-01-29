#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;
int n;
vector<vector<int>> vec(200009, vector<int>());
vector<int> ans;
vector<bool> visited(200009);

void dfs(int v) {
    visited[v] = true;
    for(int u : vec[v]) {
        if(!visited[u]) {
            dfs(u);
        }
    }
    ans.push_back(v);
}

int main(){
    cin >> n;
    rep(i, 1, n+1) {
        int c;
        cin >> c;
        rep(j, 0, c) {
            int p;
            cin >> p;
            vec[i].push_back(p);
        }
    }

    dfs(1);

    rep(i, 0, ans.size()-1) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
} 