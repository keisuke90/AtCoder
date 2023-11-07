#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> vec(n);
    rep(i, 0, n) cin >> vec[i];

    int ans = 0;
    int tmp = 0;
    rep(i, 1, n) {
        if(vec[i] <= vec[i-1]) tmp++;
        else tmp = 0;
        ans = max(ans,tmp);
    }
    cout << ans << endl;
    return 0;
} 