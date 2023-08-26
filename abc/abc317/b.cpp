#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a;
    rep(i, 0, n) {
        int A;
        cin >> A;
        a.push_back(A);
    }
    sort(a.begin(), a.end());

    int ans = -1;
    rep(i, 1, n) {
        if(a[i] - a[i-1] != 1) ans = a[i-1] + 1;
    }

    if(ans == -1) cout << a[0] - 1 << endl;
    else cout << ans << endl;
    return 0;
} 