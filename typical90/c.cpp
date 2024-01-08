#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;
int n;
vector<vector<int>> g;

vector<int> dfs(int pos) {
    vector<int> dist(n, -1);
    dist[pos] = 0;

    stack<int> st({pos});
    while(!st.empty()) {
        int now = st.top();
        st.pop();
        for(auto v : g[now]) {
            if(dist[v] == -1) {
                dist[v] = dist[now]+1;
                st.push(v);
            }
        }
    }
    return dist;
}

int main(){
    cin >> n;
    g = vector<vector<int>> (n, vector<int>());
    rep(i, 0, n-1) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    auto d = dfs(0);
    int mi = -1;
    int mv = -1;
    rep(i, 0, n) {
        if(mv < d[i]) {
            mi = i;
            mv = d[i];
        }
    }

    auto ans = dfs(mi);
    mv = -1;
    rep(i, 0, n) {
        mv = max(mv, ans[i]);
    }
    cout << mv + 1 << endl;

    return 0;
} 