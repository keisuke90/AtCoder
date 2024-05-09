#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    vector<bool> A(n);
    int ma = 0;
    rep(i, 0, n) {
        cin >> a[i];
        ma = max(ma, a[i]);
    }
    rep(i, 0, n) {
        if(a[i] == ma) A[i]=true;;
    }
    rep(i, 0, k) {
        cin >> b[i];
        if(A[b[i]-1]) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
} 