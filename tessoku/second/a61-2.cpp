#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> g(n+1, vector<int>());
    rep(i, 1, m+1) {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    rep(i, 1, n+1) {
        cout << i << ": " << '{';
        rep(j, 0, g[i].size()) {
            if(j == g[i].size()-1) cout << g[i][j];
            else cout << g[i][j] << ", ";
        }
        cout << '}' << endl;
    }

    return 0;
} 