#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    vector<int> v(101);
    rep(i, l1, r1) v[i]++;
    rep(i, l2, r2) v[i]++;
    
    int ans = 0;
    rep(i, 0, 100) if(v[i] == 2) ans++;
    cout << ans << endl;

    return 0;
} 