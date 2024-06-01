#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> a(n);
    vector<int> lr;
    rep(i, 1, n+1) a[i-1] = i;
    rep(i, l, r+1) lr.push_back(i);

    rep(i, 1, n+1) {
        if(i >= l && i <= r) {
            cout << lr.back() << ' ';
            lr.pop_back();
        } else {
            cout << a[i-1] << ' ';
        }
    }
    cout << endl;

    return 0;
} 