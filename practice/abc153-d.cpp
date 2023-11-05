#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    long long h;
    cin >> h;
    long long x = 0;
    long long ans = 1;
    while(h > 1) {
        h/=2;
        x++;
        ans+=pow(2, x);
    }

    cout << ans << endl;
    return 0;
} 