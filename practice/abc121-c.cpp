#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<pair<long long, long long>> vec(n);
    rep(i, 0, n) {
        int a, b;
        cin >> a >> b;
        vec[i] = {a, b};
    }
    sort(vec.begin(), vec.end());
    long long ans = 0;
    rep(i, 0, n) {
        if(m < 0) break;

        if(vec[i].second <= m) {
            m-=vec[i].second;
            ans+=vec[i].second*vec[i].first;
        } else {
            ans+=vec[i].first*m;
            m=0;
        }
    }
    cout << ans << endl;
    return 0;
} 