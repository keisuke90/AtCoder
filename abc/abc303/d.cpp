// #include <bits/stdc++.h>
// #define rep(i, start, end) for(long long i = start; i < end; i++)
// using namespace std;

// int main(){
//     long long x, y, z;
//     string s;
//     int c = 0;
//     int cnt = 0;
//     long long ans = 0;
//     cin >> x >> y >> z >> s;
//     rep(i, 0, s.size()){
//         if(s[i] == 'a' && c == 0) ans += x;
//         if(s[i] == 'A' && c == 1) ans += x;
//         if(s[i] == 'a' && c == 1) {
//             cnt++;
//             if(s[i] == s[i+1]) continue;
//             else {
//                 long long size1 = z + x * cnt;
//                 long long size2 = y * cnt;
//                 ans += min(size1, size2);
//                 if(min(size1, size2)== size1) c = 0;
//                 cnt = 0;
//             }
//         }
//         if(s[i] == 'A' && c == 0) {
//             cnt++;
//             if(s[i] == s[i+1]) continue;
//             else {
//                 long long size1 = z + x * cnt;
//                 long long size2 = y * cnt;
//                 ans += min(size1, size2);
//                 if(min(size1, size2)== size1) c = 1;
//                 cnt = 0;
//             }
//         }
//     }
//     cout << ans << endl;
//     return 0;
// } 

#include <bits/stdc++.h>
#define rep(i, start, end) for(long long i = start; i < end; i++)
using namespace std;

int main(){
    long long x, y, z;
    string s;
    cin >> x >> y >> z >> s;
    int n = s.size();

    vector dp(n+1, vector<long long>(2, 1e18));

    dp[0][0] = 0;
    rep(i, 0, n)rep(c, 0, 2) {
        int a = s[i] == 'A' ? 1 : 0;
        rep(nc, 0, 2) {
            long long cost = (a==nc) ? x : y;
            if(c != nc) cost += z;
            dp[i+1][nc] = min(dp[i+1][nc], dp[i][c] + cost);
        }
    }

    cout << min(dp[n][0], dp[n][1]) << endl;
    return 0;
} 