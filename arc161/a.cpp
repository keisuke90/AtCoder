#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[200009];
    rep(i, 0, n) cin >> a[i];
    sort(a, a+n);
    string ans = "Yes";
    int d = n/2 + 1;
    rep(i, 0, n/2) {
        if(a[i] >= a[i+d] || a[i+1] >= a[i+d]) {
            ans = "No";
            break;
        }
    } 

    cout << ans << endl;
    return 0;
} 