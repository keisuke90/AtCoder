#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int n, k, a[100009];
int count(int t) {
    long long cnt = 0;
    rep(i, 0, n) {
        cnt += t/a[i];
    }
    return k > cnt;
}

int main(){
    cin >> n >> k;
    rep(i, 0, n) cin >> a[i];

    int l = 1;
    int r = 1000000000;
    while(true) {
        if(l == r) break;
        int mid = (l+r)/2;
        if(count(mid)) l = mid+1;
        else r = mid;
    }

    cout << l << endl;
    return 0;
} 