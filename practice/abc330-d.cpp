#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> vec(n);
    vector<int> row(n);
    vector<int> col(n);
    rep(i, 0, n) cin >> vec[i];
    rep(i, 0, n) {
        rep(j, 0, n) {
            if(vec[i][j] == 'o') {
                row[i]++;
                col[j]++;
            }
        }
    }
    long long ans = 0;
    rep(i, 0, n) {
        rep(j, 0, n) {
            if(vec[i][j] == 'o') {
                ans += (row[i]-1)*(col[j]-1);
            }
        }
    }
    cout << ans << endl;
    return 0;
} 