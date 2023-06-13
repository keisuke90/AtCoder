#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, a, ans = 0;
    char b;

    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> b >> a;

        if(b == '+') ans += a;
        else if(b == '-') ans -= a;
        else if(b == '*') ans *= a;
        if(ans < 0) ans += 10000;
        ans %= 10000;
        cout << ans << endl;
    }
} 