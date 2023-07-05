#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;
int n, k, a[1009], b[1009], c[1009], d[1009];
vector<int> ab, cd;

bool check (long long  v1, long long  v2) {
    if(v1+v2 < k) return true;
    else return false;
}

int main(){
    cin >> n >> k;
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, n) cin >> b[i];
    rep(i, 0, n) cin >> c[i];
    rep(i, 0, n) cin >> d[i];
    rep(i, 0, n) {
        rep(j, 0, n) ab.push_back(a[i]+b[j]);
    }
    rep(i, 0, n) {
        rep(j, 0, n) cd.push_back(c[i]+d[j]);
    }
    sort(cd.begin(), cd.end());

    string ans = "No";
    rep(i, 0, n*n) {
        int pos = lower_bound(cd.begin(), cd.end(), k-ab[i]) - cd.begin();
        if(k == ab[i]+cd[pos]) ans = "Yes";
    }

    cout << ans << endl;
    return 0;
} 