#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    long long n;
    cin >> n;

    long long ans = 0;
    ans += n/11 * 2;
    n %= 11;

    if(n == 0) {
        cout << ans << endl;
        return 0;
    } else if (n > 6) {
        ans += 2;
    } else {
        ans += 1;
    }

    cout << ans << endl;

    return 0;
} 