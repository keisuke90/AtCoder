#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    long long n, m;
    cin >> n >> m;
    if(n==1 && m==1) {
        cout << 1 << endl;
    }else if(n==1) {
        cout << m-2 << endl;
    } else if (m==1) {
        cout << n-2 << endl;
    } else {
        long long ans = (n-2) * (m-2);
        cout << ans << endl;
    }

    return 0;
} 