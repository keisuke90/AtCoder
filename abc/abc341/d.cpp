#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

long long count_numbers(long long n, long long m, long long limit) {
    return limit / n + limit / m - 2 * (limit / lcm(n, m));
}

int main() {
    long long n, m, k;
    cin >> n >> m >> k;

    long long g = gcd(n, m);
    long long l = lcm(n, m);

    long long left = 0;
    long long right = 1e18+1;
    while(abs(left-right) > 1) {
        long long mid = (left+right)/2;
        if (count_numbers(n, m, mid) < k) {
            left = mid;
        } else {
            right = mid;
        }
    }
    cout << right << endl;

    return 0;
}
