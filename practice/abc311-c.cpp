#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n+1);
    rep(i, 0, n) cin >> a[i+1];

    vector<int> id(n+1);
    int k = 1;
    int v = 1;
    while (id[v] == 0) {
        id[v] = k; k++;
        v = a[v];
    }

    vector<int> ans;
    int len = k-id[v];
    rep(i, 0, len) {
        ans.push_back(v);
        v = a[v];
    }

    cout << ans.size() << endl;
    for( int v : ans) cout << v << ' ';
    cout << endl;
    return 0;
} 