#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    long long a, b, x;
    cin >> a >> b >> x;

    long long l = 0;
    long long r = 1000000001;

    auto check = [&](long long X) {
        long long dx = to_string(X).size();
        return a*X+b*dx;
    };

    while(r-l > 1) {
        long long mid = (l+r)/2;
        if(check(mid) <= x) l = mid;
        else r = mid;
    }
    cout << l << endl;

    return 0;
} 