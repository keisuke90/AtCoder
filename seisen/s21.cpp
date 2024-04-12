#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;
long long n;
vector<long long> h, s;

bool func(long long mid) {
    vector<int> count(n);

    rep(i, 0, n) {
        if(h[i] > mid) return false;
        else count[min(n-1, ((mid-h[i]) / s[i]))]++;
    }

    rep(i, 0, n-1) count[i+1] += count[i];
    rep(i, 0, n) if(count[i] > i+1) return false;
    return true;
}

int main(){
    cin >> n;
    h.resize(n);
    s.resize(n);
    rep(i, 0, n) cin >> h[i] >> s[i];

    long long l = -1;
    long long r = 1e18;
    while(abs(r-l) > 1) {
        long long mid = (l+r)/2;

        if(func(mid)) r = mid;
        else l = mid;
    }
    cout << r << endl;
    return 0;
} 