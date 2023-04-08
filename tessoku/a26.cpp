#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x){
    for(int i = 2; i*i <= x; i++){
        if(x % i == 0) return false;
    }
    return true;
}

int main(){
    int Q, X;
    cin >> Q;

    for(int i = 0; i < Q; i++){
        cin >> X;
        if(isPrime(X)) cout << "Yes" << endl;
        else cout << "No" << endl;;
    }
} 