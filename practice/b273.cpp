#include <bits/stdc++.h>
using namespace std;

long long X, K;

int main(){
    cin >> X >> K;
    long long  a = 1;
    for(int  i = 0; i < K; i++){
        X /= a;
        long long m = X % 10;
        if(m <= 4) X -= m;
        else X += 10-m;
        X *= a;
        a *= 10;
    }

    cout << X << endl;
} 