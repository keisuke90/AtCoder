#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int c = a-b;
    int d = 1;
    rep(i, 0, c) d*=32;
    cout << d << endl;

    return 0;
} 