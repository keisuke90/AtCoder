#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    long long n, m;
    cin >> n >> m;

    long long ans = 0;
    if(n < m) {
        ans+=n;
        m-=(2*n);
        ans+=m/4;
    } else {
        ans+=m/2;
    }
    cout << ans << endl;


    return 0;
} 