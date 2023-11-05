#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;

    long long d = n%k;

    long long ans = abs(d-k);
    cout << min(d, ans) << endl;
    
    return 0;
} 