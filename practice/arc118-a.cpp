#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    long long t, n;
    cin >> t >> n;
    long long ans = (n*100-1)/t;
    ans += n;
    cout << ans << endl;

    return 0;
} 