#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    long long n, a, b;
    cin >> n >> a >> b;
    long long ans = (n+1)*n/2;

    long long a_num = n/a;
    long long a_sum = (a_num+1)*a_num/2 * a;

    long long b_num = n/b;
    long long b_sum = (b_num+1)*b_num/2 * b;

    long long g = gcd(a, b);
    long long l = a*b/g;

    long long ab_num = n/l;
    long long ab_sum = (ab_num+1)*ab_num/2 * l;

    ans = ans - a_sum - b_sum + ab_sum;
    cout << ans << endl;
    return 0;
} 