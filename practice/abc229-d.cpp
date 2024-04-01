#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s;
    int k;
    cin >> s >> k;
    int n = s.size();
    vector<int> vec(s.size());
    rep(i, 0, n) {
        if(s[i] == '.') vec[i] = 1;
    }
    rep(i, 1, n) vec[i] += vec[i-1];

    int ans = 0;
    rep(i, 0, n) {
        int tmp;
        if(i == 0) {
            tmp = lower_bound(vec.begin(), vec.end(), k+1) - vec.begin();
            tmp -= i;
        } else {
            tmp = lower_bound(vec.begin(), vec.end(), k+vec[i-1]+1) - vec.begin();
            tmp -= i;
        }
        ans = max(ans, tmp);
    }

    cout << ans << endl;
    return 0;
} 