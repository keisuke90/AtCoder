#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> vec(n*3);
    rep(i,0,n*3) cin >> vec[i];
    sort(vec.begin(), vec.end(), greater<int>());
    long long ans = 0;
    for(int i=1; i<2*n; i+=2) {
        ans += vec[i];
    }
    cout << ans << endl;
    return 0;
} 