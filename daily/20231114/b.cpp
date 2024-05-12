#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, d;
    cin >> n >> d;
    vector<int> t(n);
    rep(i, 0, n) cin >> t[i];
    rep(i, 1, n) {
        if(t[i] - t[i-1] <= d) {
            cout << t[i] << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
} 