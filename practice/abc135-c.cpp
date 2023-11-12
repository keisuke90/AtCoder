#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> a(n+1), b(n);
    rep(i, 0, n+1) cin >> a[i];
    rep(i, 0, n) cin >> b[i];

    long long ans = 0;
    rep(i, 0, n) {
        rep(j, i, i+2) {
            if(a[j] <= b[i]) {
                ans+=a[j];
                b[i]-=a[j];
                a[j]=0;
            } else {
                ans+=b[i];
                a[j]-=b[i];
                b[i]=0;
            }
        }
    }
    cout << ans << endl;

    return 0;
} 