#include <bits/stdc++.h>
using namespace std;

long long Power(long long a, long long b, long long m) {
    long long p = a, Answer = 1;
    for(int i = 0; i < 30; i++){
        int wari = (1 << i);
        if((b/wari) % 2 == 1){
            Answer = (Answer * p) % m;
        }
        p = (p*p) % m;
    }
    return Answer;
}

int main(){
    long long a, b;
    cin >> a >> b;
    cout << Power(a, b, 1000000007) << endl;
} 