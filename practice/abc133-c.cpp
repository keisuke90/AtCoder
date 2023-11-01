// #include <bits/stdc++.h>
// #define rep(i, start, end) for(long long i = start; i < end; i++)
// using namespace std;

// int main(){
//     long long l, r;
//     cin >> l >> r;
//     l %= 2019;
//     r %= 2019;

//     if(l > r) {
//         long long tmp = l;
//         l = r;
//         r = tmp;
//     }
//     long long ans = 5000000000;
//     rep(i, l, r) {
//         rep(j, i+1, r+1) {
//             ans = min(ans, (i*j)%2019);
//         }
//     }
//     cout << ans << endl;
//     return 0;
// } 

#include <bits/stdc++.h>
#define rep(i, start, end) for(long long i = start; i < end; i++)
using namespace std;

int main(){
    long long l, r;
    cin >> l >> r;
    long long ans = 500000000000;
    rep(i, l, r) {
        rep(j, i+1, r+1) {
            ans = min(ans, 1LL * i * j % 2019);
            if(ans == 0) {
                cout << 0 << endl;
                return 0;
            }
        }
    }
    cout << ans << endl;
    return 0;
} 