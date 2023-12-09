#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    long long all = b-a+1;
    long long c_baisu = b/c - (a-1)/c;
    long long d_baisu = b/d - (a-1)/d;
    long long cd = lcm(c, d);
    long long cd_baisu = b/cd - (a-1)/cd;
    long long ans = all - c_baisu - d_baisu + cd_baisu;

    cout << ans << endl;

    return 0;
} 