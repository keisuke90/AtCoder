#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> t(n);
    long long T = 0;
    rep(i, 0, n) {
        cin >> t[i];
        T+=t[i];
    }
    int m;
    cin >> m;
    rep(i, 0, m) {
        int p, x;
        cin >> p >> x;
        cout << T - t[p-1] + x << endl;;
    }

    return 0;
} 