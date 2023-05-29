// #include <bits/stdc++.h>
// #define rep(i, start, end) for(int i = start; i < end; i++)
// using namespace std;

// int main(){
//     int n, m;
//     cin >> n >> m;
//     string S[10];
//     int vec[10][10];
//     rep(i, 0, n){
//         rep(j, 0, n){
//             vec[i][j] = 0;
//         }
//     }

//     rep(i, 0, n) cin >> S[i];

    
//     rep(i, 0, n){
//         rep(j, 0, n){
//             rep(k, 0, m){
//                 if(S[i][k] != S[j][k]){
//                     vec[i][j]++;
//                 }
//             }
//         }
//     }

//     string ans = "Yes";
//     rep(j, 0, n){
//         int flag = 0;
//         rep(i, 0, n){
//             if(vec[i][j]==1) flag++;
//         }
//         if(flag == 0){
//             ans = "No";
//             break;
//         }
//     }


//     cout << ans << endl;

//     return 0;
// } 

#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    rep(i, 0, n) cin >> s[i];
    sort(s.begin(), s.end());
    do {
        bool ok = true;
        rep(i, 0, n-1) {
            int d= 0;
            rep(j, 0, m) if(s[i][j] != s[i+1][j]) d++;
            if(d != 1) ok = false;
        }
        if(ok){
            cout << "Yes" << endl;
            return 0;
        }
    } while(next_permutation(s.begin(), s.end()));
    cout << "No" << endl;
    return 0;
} 