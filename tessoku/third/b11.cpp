#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> vec(n);
    rep(i, 0, n) cin >> vec[i];
    sort(vec.begin(), vec.end());

    int q;
    cin >> q;
    rep(i, 0, q) {
        int x;
        cin >> x;
        cout << lower_bound(vec.begin(), vec.end(), x) - vec.begin() << endl;
    }

    return 0;
} 