#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int a, b, d;
    cin >> a >> b >> d;

    while(a <= b) {
        cout << a << ' ';
        a += d;
    }

    return 0;
} 