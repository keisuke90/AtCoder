#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    a*=a;
    b*=b;
    c*=c;

    if(a+b < c) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
} 