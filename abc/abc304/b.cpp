#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    long long n;
    cin >> n;

    if(n < 1000) {
        cout << n << endl;
        return 0;
    } else if(n < 10000) {
        cout << n - n % 10 << endl;
    } else if(n < 100000) {
        cout << n- n %100 << endl;
    } else if(n < 1000000) {
        cout << n - n % 1000 << endl;
    } else if(n < 10000000) {
        cout << n - n % 10000 << endl;
    } else if (n < 100000000) {
        cout << n - n % 100000 << endl;
    } else if (n < 1000000000){
        cout << n - n % 1000000 << endl;
    }

    return 0;
} 