#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    long long L, R;
    cin >> L >> R;
    vector<pair<long long, long long>> ans;
    while(L < R) {
        for(int i = 60; i >=0; i--) {
            long long w = 1LL<<i;
            if(L%w) continue;
            if(L+w > R) continue;
            ans.emplace_back(L, L+w);
            L += w;
            break;
        }
    }
    cout << ans.size() << endl;
    for(auto v : ans) cout << v.first << " " << v.second << endl;
    return 0;
} 