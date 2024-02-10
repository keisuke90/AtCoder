#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

map<long long, long long> mp;

long long func(long long n) {
    if (n == 1) return 0;
    if (mp.count(n)) return mp[n];
    
    long long x = n / 2;
    long long y = n - x;
    
    return mp[n] =  n + func(x) + func(y);
}

int main(){
    long long n;
    cin >> n;
    cout << func(n) << endl;

    return 0;
} 