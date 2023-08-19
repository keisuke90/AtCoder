#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<vector<int>> vec(n+1);
    rep(i, 1, n+1) {
        int a, b;
        cin >> a >> b;
        vec[a].push_back(b);
    }
    int ans1 = 0, ans2 = 0;
    vector<int> best;
    rep(i, 1, n+1) {
        sort(vec[i].begin(), vec[i].end(), greater<int>());
        if(vec[i].size() > 1) {
            ans2 = max(ans2, vec[i][0] + vec[i][1]/2);
        }
        if(vec[i].size() > 0) {
            best.push_back(vec[i][0]);
        }
    }
    sort(best.begin(), best.end(), greater<int>());
    if(best.size() > 1) {
        ans1 = best[0] + best[1];
        if(ans1 > ans2) cout << ans1 << endl;
        else cout << ans2 << endl;
        return 0;
    }
    cout << ans2 << endl;
    return 0;
} 