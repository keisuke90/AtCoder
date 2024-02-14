#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int cnt = 0;
    rep(i, 1, n+1) {
        rep(j, 1, n+1) {
            if(k-i-j <= n && i+j < k) cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
} 