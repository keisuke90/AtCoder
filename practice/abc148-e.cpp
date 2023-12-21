#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

long long g1(long long n, int p) {
    if(n==0) return 0;
    return n/p + g1(n/p, p);
}

long long g2(long long n, int p) {
    if(n%2==1) { 
        return g1(n, p) - g2(n-1, p);
    }
    long long res = g1(n/2, p);
    if(p == 2) res+= n;
    return res;
}

int main(){
    long long n;
    cin >> n;
    if(n%2==1) {
        cout << 0 << endl;
        return 0;
    }
    long long ans = min(g2(n,2), g2(n,5));
    cout << ans << endl;
    return 0;
} 