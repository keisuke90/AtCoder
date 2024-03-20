#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;
int n;
vector<vector<int> > g(109);
vector<bool> visited(109);
vector<int> forw(109);
vector<int> backw(109);
int t = 1;

void dfs(int pos) {
    visited[pos] = true;
    forw[pos] = t;
    t++;
    rep(i, 0, g[pos].size()) {
        if(!visited[g[pos][i]]) {
            dfs(g[pos][i]);
        }
    }
    backw[pos] = t;
    t++;
}


int main(){
    cin >> n;

    rep(i, 0, n) {
        int a, b;
        cin >> a >> b;
        rep(j, 0, b) {
            int c;
            cin >> c;
            g[a].push_back(c);
        }
    }

    rep(i, 1, n+1) {
        if(!visited[i]) {
            dfs(i);
        }
    }


    rep(i, 1, n+1) {
        cout << i << ' ' << forw[i] << ' ' << backw[i] << endl;
    }


    return 0;
} 