#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, n) cin >> b[i];
    long long sum = 0;
    rep(i, 0, n) {
        sum+=a[i]*b[i];
    }
    if(sum == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
} 