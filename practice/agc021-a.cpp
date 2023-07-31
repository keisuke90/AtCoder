#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    long long n;
    cin >> n;

    long long ans = 0;
    while(true) {
        if(n/10 == 0) {
            ans+=n;
            break;
        }
        if(n%10 == 9) {
            ans+=9;
            n /= 10;
        } else {
            ans+=9;
            n /= 10;
            n -= 1;
        }
    }
    cout << ans << endl;
    return 0;
} 