#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> a(n), b(n);
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, n) cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    long long sum = 0;
    rep(i, 0, n) {
        sum += abs(a[i]-b[i]);
    }
    cout << sum << endl;
    return 0;
} 