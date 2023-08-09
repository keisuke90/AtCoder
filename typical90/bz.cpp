#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> g(n+1, vector<int>());
    rep(i, 0, m) {
        int a, b;
        cin >> a >> b;

        if(a > b) g[a].push_back(b);
        if(b > a) g[b].push_back(a);
    }

    int cnt = 0;
    rep(i, 1, n+1) {
        if(g[i].size() == 1) cnt++;
    }
    cout << cnt << endl;
    return 0;
} 