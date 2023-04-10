#include <bits/stdc++.h>
using namespace std;

int GCD(int a, int b){
    while(a >= 1 && b >= 1){
        if(a > b) a %= b;
        else b %= a;
    }
    if(a != 0) return a;
    return b;
}

int main(){
    long long A, B;
    cin >> A >> B;
    cout << (A*B)/GCD(A,B) << endl;; 
} 