// #include <bits/stdc++.h>
// #define rep(i, start, end) for(int i = start; i < end; i++)
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     vector<int> a(n), b(n);
//     rep(i, 0, n) {
//         cin >> a[i] >> b[i];
//     }

//     long long ans = 0;
//     int p = -1;
//     int min_n = 0;
//     rep(i, 0, n) {
//         if(abs(a[i]-b[i]) > min_n) {
//             p = i;
//             min_n = abs(a[i] - b[i]);
//         }
//         ans += a[i];
//     }
//     ans+=b[p];
//     ans-=a[p];
//     cout << ans << endl;
//     return 0;
// } 

#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> a(n), b(n);
    long long cnt = 0;
    rep(i, 0, n) {
        cin >> a[i] >> b[i];
        cnt += a[i];
    }
    long long ans = 0;
    rep(i, 0, n) {
        ans = max(ans, cnt + b[i] - a[i]);
    }
    cout << ans << endl;

    return 0;
} 