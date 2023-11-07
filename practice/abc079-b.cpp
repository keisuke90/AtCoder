#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    long long l1 = 2;
    long long l2 = 1;

    int n; 
    cin >> n;
    if(n == 0) {
        cout << l1 << endl;
        return 0;
    }
    if(n == 1) {
        cout << l2 << endl;
        return 0;
    }
    long long ans = 0;
    rep(i, 1, n) {
        ans = l1+l2;
        l1 = l2;
        l2 = ans;
    }
    cout << ans << endl;
    return 0;
} 