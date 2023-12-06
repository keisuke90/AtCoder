#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    long long n, a, b;
    cin >> n >> a >> b;

    if(a>b) {
        cout << 0 << endl;
        return 0;
    } else if(n==1) {
        cout << (a==b ? 1 : 0) << endl;
        return 0;
    } else {
        long long ans = (b-a)*(n-2)+1;
        cout << ans << endl;
    }

    return 0;
} 