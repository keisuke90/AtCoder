#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    long long a, b, c, e=1;
    cin >> a >> b >> c;
    rep(i, 0, b) e*=c;


    if(a < e) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
} 