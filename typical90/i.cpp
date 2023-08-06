#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> one(100009, 0), two(100009, 0);
    rep(i, 1, n+1) {
        int c, p;
        cin >> c >> p;
        if(c == 1) one[i] = p;
        else if (c == 2) two[i] = p;
    }

    rep(i, 1, n+1) one[i] += one[i-1];
    rep(i, 1, n+1) two[i] += two[i-1];

    int q;
    cin >> q;
    rep(i, 0, q) {
        int l, r;
        cin >> l >> r;
        cout << one[r] - one[l-1] << ' ' << two[r] - two[l-1] << endl;
    }

    return 0;
} 