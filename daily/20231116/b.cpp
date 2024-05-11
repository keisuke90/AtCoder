#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    long long n;
    cin >> n;
    // long long a = pow(2, n);
    // long long b = n*n;
    // if(a > b) cout << "Yes" << endl;
    // else cout << "No" << endl;
    double left = n * log2(2);
    double right = 2 * log2(n);
    if(left > right) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
} 