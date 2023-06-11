#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;
long long n, k;
vector<long long> a(100009); 

bool check(long long x) {
    long long cnt = 0;
    rep(i, 1, n+1) cnt += x/a[i];
    if(cnt >= k) return true;
    else return false;
}

int main(){
    cin >> n >> k;
    rep(i, 1, n+1) cin >> a[i];

    long long l = 1, r = 1000000000;
    while(r > l) {
        long long m = (l+r)/2;
        bool ans = check(m);
        if(ans) r = m;
        else l = m+1;
    }
    cout << l << endl;
    return 0;
} 