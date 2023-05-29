#include <bits/stdc++.h>
using namespace std;

int main(){
    long long N;
    cin >> N;
    int mod = 998244353;

    N %= mod;
    if(N < 0) N += mod;
    cout << N << endl;
} 