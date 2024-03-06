#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    int amax = 0;
    rep(i, 0, n) {
        cin >> a[i];
        amax = max(amax, a[i]);
    }

    for(auto aa : a) {
        cout << (2000000000L * aa + amax) / (2 * amax) << " ";
    }
    cout << endl;
    return 0;
} 