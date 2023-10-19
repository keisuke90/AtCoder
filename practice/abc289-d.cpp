#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, m, x;
    cin >> n;
    vector<int> a(n);
    vector<int> b(m);
    vector<int> visited(1000009);
    rep(i, 0, n) cin >> a[i];
    cin >> m;
    rep(i, 0, m) {
        int b;
        cin >> b;
        visited[b] = -1;
    }
    cin >> x;

    visited[0] = 1;
    rep(i, 0, x+1) {
        if(visited[i] == 1) {
            for(auto aa : a) {
                if(visited[i+aa] != -1) visited[i+aa] = 1;
            };
        }
    }

    if(visited[x] == 1) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
} 