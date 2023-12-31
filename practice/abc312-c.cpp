#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, m) cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int left = 0;
    int right = 1000000001;

    while(abs(right - left) > 1) {
        int mid = (right+left)/2;
        int seller = upper_bound(a.begin(), a.end(), mid) - a.begin();
        int buyer = m - (lower_bound(b.begin(), b.end(), mid) - b.begin());
        if(seller >= buyer) {
            right = mid;
        } else {
            left = mid;
        }
    }
    cout << right << endl;
    return 0;
} 