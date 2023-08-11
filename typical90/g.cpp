#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    int pos1 = 2000000000, pos2 = 2000000000;
    cin >> n;
    vector<int> a(n);
    rep(i, 0, n) cin >> a[i];
    sort(a.begin(), a.end());
    int q;
    cin >> q;
    rep(i, 0, q) {
        int b;
        cin >> b;
        int c = lower_bound(a.begin(), a.end(), b) - a.begin();

        if(c == 0) cout << abs(a[c]-b) << endl;
        else if(c == n) cout << abs(a[c-1] - b) << endl;
        else cout << min(abs(a[c]-b), abs(a[c-1]-b)) << endl;
    }

    return 0;
} 