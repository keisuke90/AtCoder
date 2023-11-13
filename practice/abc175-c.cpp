#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    long long x, k, d;
    cin >> x >> k >> d;
    x = abs(x);
    long long a = x/d;
    if(a >= k) {
        cout << x-(d*k) << endl;
        return 0;
    }
    long long b = k-a;
    if(b%2==0) {
        cout << x%d << endl;
        return 0;
    } else {
        cout << d-(x%d) << endl;
        return 0;
    }

    return 0;
} 