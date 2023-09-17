#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<bool> visited(n, false);
    rep(i, 0, n) cin >> a[i];
    visited[0] = true;
    int ans = 0;
    int next = a[0] - 1;
    while(true) {
        if(visited[next]) break;
        ans++;
        visited[next] = true;
        if(next == 1) break;
        next = a[next] - 1;
    }

    if(!visited[1]) cout << -1 << endl;
    else cout << ans << endl;

    return 0;
} 