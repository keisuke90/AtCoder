#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;
int n, m;
vector<vector<int>> graph;
vector<bool> visited;

void dfs(int pos) {
    visited[pos] = true;
    rep(i, 0, graph[pos].size()) {
        int next = graph[pos][i];
        if(visited[next] == false) dfs(next);
    }
    return;
}

int main(){
    cin >> n >> m;
    graph = vector(n, vector<int>());
    rep(i, 0, m) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    if(n - m != 1) {
        cout << "No" << endl;
        return 0;
    }
    rep(i, 0, n) {
        if(graph[i].size() > 2) {
            cout << "No" << endl;
            return 0;
        }
    }
    visited = vector<bool>(n);
    dfs(0);
    rep(i, 0, n) {
        if(!visited[i]) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
} 