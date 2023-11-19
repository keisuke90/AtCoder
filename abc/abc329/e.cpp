#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;

    queue<int> q;
    vector<bool> visited(n);
    auto push = [&](int i) {
        if(i < 0 || i+m > n) return;
        if(visited[i]) return;
        rep(j, 0, m) {
            if(s[j+i]!='#' && s[i+j] != t[j]) return;
        }
        visited[i] = true;
        q.push(i);
    };

    rep(i, 0, n-m+1) push(i);
    while(!q.empty()) {
        int pos = q.front(); q.pop();
        rep(i, 0, m) s[i+pos] = '#';
        rep(j, pos-m+1, pos+m) {
            push(j);
        }
    }

    if(s==string(n, '#')) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
} 