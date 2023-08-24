#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long ans = 0;
    rep(i, 0, 10000) {
        ans = pow(2, i);
        if(ans > n) {
            cout << i-1 << endl;
            break;
        }
    }

    return 0;
} 