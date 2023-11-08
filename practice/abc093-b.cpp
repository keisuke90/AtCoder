#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int a, b, k;
    cin >> a >> b >> k;

    if(b-a+1 <= k) {
        rep(i, a, b+1) cout << i << endl;
    } else if(b-a+1 >= k*2) {
        rep(i, a, a+k) cout << i << endl;
        rep(i, b-k+1, b+1) cout << i << endl;
    } else {
        rep(i, a, b+1) cout << i << endl;
    }

    return 0;
} 