#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> g(n, vector<int>());

    rep(i, 0, m) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    rep(i, 0, n) {
        cout << g[i].size() << endl;
    }

    return 0;
} 