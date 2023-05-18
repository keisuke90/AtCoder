#include <bits/stdc++.h>
#define rep(i, start, end) for(long long i = start; i < end; i++)
using namespace std;

int main(){
    long long x, k, d;
    cin >> x >> k >> d;
    x = abs(x);

    long long straight = min(k, x/d);
    k -= straight;
    x -= straight * d;

    if(k % 2 == 0){
        cout << x << endl;
    }else{
        cout << d - x << endl;
    }


    return 0;
} 