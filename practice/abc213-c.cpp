#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int h, w, n;
    cin >> h >> w >> n;
    vector<long long> column(n), row(n), col(n), r(n);

    rep(i, 0, n) {
        cin >> column[i] >> row[i];
        col[i] = column[i];
        r[i] = row[i];
    }
    sort(col.begin(), col.end());
    sort(r.begin(), r.end());
    col.erase(unique(col.begin(), col.end()), col.end());
    r.erase(unique(r.begin(), r.end()), r.end());

    rep(i, 0, n) {
        column[i] = lower_bound(col.begin(), col.end(), column[i]) - col.begin();
    }
    rep(i, 0, n) {
        row[i] = lower_bound(r.begin(), r.end(), row[i]) - r.begin();
    }

    rep(i, 0, n) {
        cout << column[i] + 1 << ' ' << row[i] + 1 << endl;
    }

    return 0;
} 