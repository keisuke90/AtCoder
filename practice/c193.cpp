#include <bits/stdc++.h>
using namespace std;

int main(){
    long long  N;
    set<long long> S;
    cin >> N;
    for(long long a = 2; a*a <= N; a++){
        long long x = a*a;
        while(x <= N){
            S.insert(x);
            x *= a;
        
        }
    }
    cout << N-S.size() << endl;
} 