#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    long long n, a, b;
    cin >> n >> a >> b;

    long long c = n/(a+b);

    if((n%(a+b))>=a) {
        cout << c*a+a << endl;
    } else {
        cout << c*a+n-(a+b)*c << endl;
    }

    return 0;
} 