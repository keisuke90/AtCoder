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
        g[a].push_back(b);
        g[b].push_back(a);
    }
    int stu = 0;
    int fri = 0;
    rep(i, 1, n+1) {
        int cnt = g[i].size();
        fri = max(fri, cnt);
        if(fri == g[i].size()) stu = i;
    }
    cout << stu << endl;
    return 0;
} 