#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
    vector<int> vec(n);
    rep(i, 0, n) cin >> vec[i];
    sort(vec.begin(), vec.end());
    int ans = 0;

    for(auto v : vec) {
        if(x >= v) {
            x-=v;
            ans++;
        } else {
            cout << ans << endl;
            return 0;
        }
    }

    cout << (x>0 ? ans-1 : ans) << endl;
    return 0;
} 