#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n), c(n), d(n);
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, n) cin >> b[i];
    rep(i, 0, n) cin >> c[i];
    rep(i, 0, n) cin >> d[i];
    vector<long long> ab(n*n);
    vector<long long> cd(n*n);

    rep(i, 0, n) {
        rep(j, 0, n) {
            ab[i*n+j] = a[i]+b[j];
        }
    }
    rep(i, 0, n) {
        rep(j, 0, n) {
            cd[i*n+j] = c[i]+d[j];
        }
    }
    sort(ab.begin(), ab.end());
    sort(cd.begin(), cd.end());
    bool ok = false;
    rep(i, 0, n*n) {
        long long tgt = k - ab[i];

        if(binary_search(cd.begin(), cd.end(), tgt)) {
            ok = true;
            break;
        }
    }

    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
} 