#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> vec(n);
    rep(i,0,n) cin >> vec[i];
    vector<vector<long long>> vec2(n, vector<long long>(n));

    long long ans = 0;
    rep(i,0,n) {
        rep(j, i, n) {
            if(j==i) {
                vec2[i][j] = vec[j];
                ans = max(ans, vec[j]);
            } else {
                vec2[i][j] = min(vec2[i][j-1], vec[j]);
                ans = max(ans, vec2[i][j]*(j-i+1));
            }
        }
    }
    cout << ans << endl;

    return 0;
} 