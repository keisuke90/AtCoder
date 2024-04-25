#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> vec(n+1);
    vector<int> ans, vec2(n+1);
    priority_queue<int, vector<int>, greater<int>> pq;

    rep(i, 0, m) {
        int a, b;
        cin >> a >> b;
        vec[a].push_back(b);
        vec2[b]++;
    }

    rep(i, 1, n+1) {
        if(vec2[i] == 0) pq.push(i);
    }

    while(!pq.empty()) {
        int p = pq.top();
        pq.pop();
        ans.push_back(p);
        for(auto v : vec[p]) {
            vec2[v]--;
            if(vec2[v] == 0) pq.push(v);
        }
    }


    if(ans.size() != n) cout << -1 << endl;
    else {
        rep(i, 0, n) cout << ans[i] << ' ';
        cout << endl;
    }
    return 0;
} 