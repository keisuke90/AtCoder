#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

bool isPrime(int x) {
    for(int i = 2; i*i < x; i++) {
        if(x % i == 0) return false;
    }
    return true;
}

int main(){
    int q;
    cin >> q;
    rep(i, 0, q) {
        int x;
        cin >> x;
        if(isPrime(x)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
} 