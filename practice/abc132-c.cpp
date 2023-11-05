#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> vec(n);
    rep(i,0,n) cin >> vec[i];
    sort(vec.begin(), vec.end());
    int ans = vec[vec.size()/2] - vec[vec.size()/2-1];
    cout << ans << endl;
    return 0;
} 