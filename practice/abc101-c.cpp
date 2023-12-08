#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> vec(n);
    rep(i, 0, n) cin >> vec[i];

    int ans = (n-1+k-2)/(k-1);
    cout << ans << endl;

    return 0;
} 