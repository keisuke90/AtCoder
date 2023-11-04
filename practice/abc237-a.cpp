#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    long long t = 2147483648;
    long long t2 = -2147483648;

    long long n;
    cin >> n;
    if(t2 <= n && n < t) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
} 