#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    long long a, b;
    cin >> a >> b;
    long long ab = gcd(a, b);
    long long ans = a*b/ab;
    cout << ans << endl;

    return 0;
} 