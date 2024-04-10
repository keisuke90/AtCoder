#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, q;
    cin >> n >> q;
    vector<long long> vec(n+1), vs(n+1);
    rep(i, 1, n+1) cin >> vec[i];
    sort(vec.begin(), vec.end());
    rep(i, 1, n+1) vs[i] = vec[i]+vs[i-1];

    rep(i, 0, q) {
        long long x;
        cin >> x;

        long long l = 0;
        long long r = n+1;
        while(abs(l-r) > 1) {
            long long mid = (l+r)/2;
            if(vec[mid] < x) l = mid;
            else r = mid;
        }

        long long ans = 0;
        ans += x*l - vs[l];
        ans += vs[n] - vs[l];
        ans -= x*(n-l);
        cout << ans << endl;
    }
    return 0;
} 