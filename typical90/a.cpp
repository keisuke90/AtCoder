#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;
int n, l, k;
vector<int> a;

bool check(int m) {
    int cnt = 0;
    int pre = 0;
    rep(i, 0, n) {
        if(a[i]-pre >= m) {
            cnt++;
            pre = a[i];
        }
    }
    if(l-pre>=m) cnt++;
    return (cnt >= k+1);
}

int main(){
    cin >> n >> l >> k;
    a.resize(n);
    rep(i,0,n) cin >> a[i];

    int left = 0;
    int right = l+1;
    while(right - left > 1) {
        int mid = (left+right)/2;
        if(check(mid)) left = mid;
        else right = mid;
    }

    cout << left << endl;
    return 0;
} 