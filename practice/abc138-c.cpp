#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<double> vec(n);
    rep(i, 0, n) cin >> vec[i];
    sort(vec.begin(), vec.end());
    double ans = vec[0];
    rep(i, 1, n) {
        ans = (ans + vec[i])/2.0;
    }
    cout << ans << endl;
    return 0;
} 