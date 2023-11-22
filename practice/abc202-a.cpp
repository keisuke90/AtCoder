#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    a=7-a;
    b=7-b;
    c=7-c;

    int ans = a+b+c;
    cout << ans << endl;

    return 0;
} 