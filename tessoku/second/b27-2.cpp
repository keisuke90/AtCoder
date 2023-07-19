#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

long long GCD(long long A, long long B) {
    int ret = A % B;
    if(ret == 0) return B;
    return GCD(B, ret);
}

int main(){
    long long a, b;
    cin >> a >> b;
    long long A = a > b ? a : b;
    long long B = a > b ? b : a;

    long long C = GCD(A, B);
    long long ans = (a*b)/C;
    
    cout << ans << endl;
    return 0;
} 