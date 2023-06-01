#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

const int di[] = {-1, -1, -1, 0, 0, 1, 1, 1};
const int dj[] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main(){
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    rep(i, 0, n){
        string s;
        cin >> s;
        rep(j, 0, n) a[i][j] = s[j] - '0';
    }
    long long ans = 0;
    rep(si, 0, n)rep(sj, 0, n)rep(v, 0, 8) {
        int i = si, j = sj;
        long long x = 0;
        rep(k, 0, n) {
            x = x*10 + a[i][j];
            i += di[v];
            j += dj[v];
            i = (i+n)%n;
            j = (j+n)%n; 
        }
        ans = max(ans, x);
    }
    cout << ans << endl;
    return 0;
} 