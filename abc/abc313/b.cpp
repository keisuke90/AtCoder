#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> vec[59];
    vector<vector<bool>> ans(59, vector<bool>(59, false));
    rep(i, 0, m) {
        int a, b;
        cin >> a >> b;
        vec[a].push_back(b);
    }
    queue<int> q, Q;

    rep(i, 1, n+1){
        q.push(i);
        Q.push(i);
        while(!q.empty()) {
            int now = q.front();
            q.pop();
            for(int next: vec[now]) {
                if(ans[i][next]) continue;
                ans[i][next] = true;
                q.push(next);
            }
        }
    }

    int aaa[59];
    rep(i, 1, n+1) {
        int cnt = 0;
        rep(j, 1, n+1) {
            if(ans[i][j]) cnt++;
        }
        aaa[i] = cnt;
    }

    int cnt2 = 0;
    int mx = 0;
    rep(i, 1, n+1) {
        if(aaa[i] == n-1) {
            cnt2++;
            mx = i;
        }
    }

    if(cnt2 == 0 || cnt2 > 1) {
        cout << -1 << endl;
        return 0;
    } else if(cnt2 == 1) {
        cout << mx << endl;
    }
    return 0;
} 