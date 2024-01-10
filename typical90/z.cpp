#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;
vector<vector<int>> vec(100009, vector<int>());
vector<bool> color(100009);
vector<bool> visited(100009);

void dfs(int pos) {
    visited[pos] = true;
    rep(i, 0, vec[pos].size()) {
        int next = vec[pos][i];
        if(!visited[next]) {
            color[next] = !color[pos];
            dfs(next);
        }
    }
}

int main(){
    int n;
    cin >> n;

    rep(i, 0, n-1) {
        int a, b;
        cin >> a >> b;
        a--;b--;
        vec[a].push_back(b);
        vec[b].push_back(a);
    }
    int pos = -1;
    rep(i, 0, n) {
        if(vec[i].size()==1) {
            pos = i;
            break;
        }
    }

    color[pos] = true;
    dfs(pos);

    int cnt = 0;
    rep(i, 0, n) {
        if(color[i]) cnt++;
    }

    if(cnt >= n/2) {
        cnt = 0;
        rep(i, 0, n) {
            if(cnt>=n/2) {
                cout << endl;
                break;
            }
            if(color[i]) {
                cout << i+1 << ' ';
                cnt++;
            }
        }
    } else {
        cnt = 0;
        rep(i, 0, n) {
            if(cnt>=n/2) {
                cout << endl;
                break;
            }
            if(!color[i]) {
                cout << i+1 << ' ';
                cnt++;
            }
        }

    }

    return 0;
} 