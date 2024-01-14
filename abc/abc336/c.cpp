#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    n--;
    long long ans = 0;
    long long base = 1;

    while(n > 0) {
        long long digit = n % 5;
        ans += digit * 2 * base;
        n /= 5;
        base *= 10;
    }

    cout << ans << endl;

    return 0;
}