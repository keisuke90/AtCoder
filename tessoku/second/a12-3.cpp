#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

long long n,k;
long long a[100009];

bool check(long long x) {
    long long sum = 0;
    rep(i, 1, n+1) sum += x/a[i];
    if(sum >= k) return true;
    else return false;

}

int main(){
    cin >> n >> k;
    rep(i, 1, n+1) cin >> a[i];

    long long l = 1, r = 1e9;
    while(l < r) {
        long long mid = (l + r) / 2;
        bool ans = check(mid);
        if(ans) r = mid;
        else l = mid + 1;
    }
    cout << l << endl;
    return 0;
} 