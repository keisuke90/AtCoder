// #include <bits/stdc++.h>
// #define rep(i, start, end) for(int i = start; i < end; i++)
// using namespace std;
// long long n, k;
// int cnt = 0;
// vector<long long> vec(200009);
// vector<bool> visited(200009);
// vector<long long> ans;

// int dfs(int pos) {
//     if(visited[pos]) return pos;
//     visited[pos] = true;
//     cnt++;
//     return dfs(vec[pos]);
// }

// void dfs2(int pos) {
//     if(!visited[pos]) return;
//     visited[pos] = false;
//     ans.push_back(pos);
//     return dfs2(vec[pos]);
// }

// int main(){
//     cin >> n >> k;
//     rep(i, 1, n+1) cin >> vec[i];
//     dfs2(dfs(1));
//     k -= cnt-ans.size();
//     long long pos = k%ans.size();
//     cout << ans[pos] << endl;
//     return 0;
// } 


#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;
    vector<int> a(n);
    rep(i, 0, n) cin >> a[i];

    vector<int> s;
    vector<int> order(n+1, -1);
    int c = 1, l = 0;
    {
        int v = 1;
        while(order[v] == -1) {
            order[v] = s.size();
            s.push_back(v);
            v = a[v-1];
        }
        c = s.size() - order[v];
        l = order[v];
    }

    if(k < l) cout << s[k] << endl;
    else {
        k -= l;
        k %= c;
        cout << s[l+k] << endl;
    }

    return 0;
} 