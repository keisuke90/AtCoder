#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

long long base8_to_long(string n) {
    long long res = 0;
    rep(i, 0 , n.size()) {
        res = res*8 + int(n[i] - '0');
    }
    return res;
}

string long_to_base9(long long n) {
    if(n == 0) return "0";
    string res;
    while(n > 0) {
        res = char(n%9 + '0') + res;
        n /= 9;
    }
    return res;
}

int main(){
    string n;
    int k;
    cin >> n >> k;

    rep(i, 0, k) {
        n = long_to_base9(base8_to_long(n));
        rep(j, 0, n.size()) {
            if(n[j] == '8') n[j] = '5';
        }
    }

    cout << n << endl;
    return 0;
} 