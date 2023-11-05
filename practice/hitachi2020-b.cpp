#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int A, B, M;
    cin >> A >> B >> M;
    vector<int> a(A), b(B);
    rep(i, 0, A) cin >> a[i];
    rep(i, 0, B) cin >> b[i];

    int ans = 1000000;
    rep(i, 0, M) {
        int x, y, c;
        cin >> x >> y >> c;
        x--;
        y--;
        int tmp = a[x] + b[y] - c;
        ans  = min(ans, tmp);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    cout << min(ans, a[0]+b[0]) << endl;
    return 0;
} 