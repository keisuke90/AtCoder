// #include <bits/stdc++.h>
// #define rep(i, start, end) for(int i = start; i < end; i++)
// using namespace std;

// int main(){
//     int h, w;
//     cin >> h >> w;
//     string S[h];
//     rep(i, 0, h) cin >> S[i];

//     rep(i, 0, h){
//         rep(j, 0, w){
//             if(w-j >= 5){
//                 if(S[i][j] == 's' && S[i][j+1] == 'n' && S[i][j+2] == 'u' && S[i][j+3] == 'k' && S[i][j+4] == 'e'){
//                     cout << i+1 << ' ' << j+1 << endl;
//                     cout << i+1 << ' ' << j+2 << endl;
//                     cout << i+1 << ' ' << j+3 << endl;
//                     cout << i+1 << ' ' << j+4 << endl;
//                     cout << i+1 << ' ' << j+5 << endl;
//                     return 0;
//                 }
//                 if(S[i][j] == 'e' && S[i][j+1] == 'k' && S[i][j+2] == 'u' && S[i][j+3] == 'n' && S[i][j+4] == 's'){
//                     cout << i+1 << ' ' << j+5 << endl;
//                     cout << i+1 << ' ' << j+4 << endl;
//                     cout << i+1 << ' ' << j+3 << endl;
//                     cout << i+1 << ' ' << j+2 << endl;
//                     cout << i+1 << ' ' << j+1 << endl;
//                     return 0;
//                 }
//             }
//             if(w-i >= 5){
//                 if(S[i][j] == 's' && S[i+1][j] == 'n' && S[i+2][j] == 'u' && S[i+3][j] == 'k' && S[i+4][j] == 'e'){
//                     cout << i+1 << ' ' << j+1 << endl;
//                     cout << i+2 << ' ' << j+1 << endl;
//                     cout << i+3 << ' ' << j+1 << endl;
//                     cout << i+4 << ' ' << j+1 << endl;
//                     cout << i+5 << ' ' << j+1 << endl;
//                     return 0;
//                 }
//                 if(S[i][j] == 'e' && S[i+1][j] == 'k' && S[i+2][j] == 'u' && S[i+3][j] == 'n' && S[i+4][j] == 's'){
//                     cout << i+5 << ' ' << j+1 << endl;
//                     cout << i+4 << ' ' << j+1 << endl;
//                     cout << i+3 << ' ' << j+1 << endl;
//                     cout << i+2 << ' ' << j+1 << endl;
//                     cout << i+1 << ' ' << j+1 << endl;
//                     return 0;
//                 }
//             }
//             if(w-j >= 5 && w-i >= 5){
//                 if(S[i][j] == 's' && S[i+1][j+1] == 'n' && S[i+2][j+2] == 'u' && S[i+3][j+3] == 'k' && S[i+4][j+4] == 'e'){
//                     cout << i+1 << ' ' << j+1 << endl;
//                     cout << i+2 << ' ' << j+2 << endl;
//                     cout << i+3 << ' ' << j+3 << endl;
//                     cout << i+4 << ' ' << j+4 << endl;
//                     cout << i+5 << ' ' << j+5 << endl;
//                     return 0;
//                 }
//                 if(S[i][j] == 'e' && S[i+1][j+1] == 'k' && S[i+2][j+2] == 'u' && S[i+3][j+3] == 'n' && S[i+4][j+4] == 's'){
//                     cout << i+5 << ' ' << j+5 << endl;
//                     cout << i+4 << ' ' << j+4 << endl;
//                     cout << i+3 << ' ' << j+3 << endl;
//                     cout << i+2 << ' ' << j+2 << endl;
//                     cout << i+1 << ' ' << j+1 << endl;
//                     return 0;
//                 }
//                 if(S[i][j+4]=='s' && S[i+1][j+3]=='n' && S[i+2][j+2]=='u' && S[i+3][j+1] =='k' && S[i+4][j]=='k'){
//                     cout << i+1 << ' ' << j+5 << endl;
//                     cout << i+2 << ' ' << j+4 << endl;
//                     cout << i+3 << ' ' << j+3 << endl;
//                     cout << i+4 << ' ' << j+2 << endl;
//                     cout << i+5 << ' ' << j+1 << endl;
//                     return 0;
//                 }
//                 if(S[i+4][j]=='s' && S[i+3][j+1]=='n' && S[i+2][j+2]=='u' && S[i+1][j+3] =='k' && S[i][j+4]=='k'){
//                     cout << i+5 << ' ' << j+1 << endl;
//                     cout << i+4 << ' ' << j+2 << endl;
//                     cout << i+3 << ' ' << j+3 << endl;
//                     cout << i+2 << ' ' << j+4 << endl;
//                     cout << i+1 << ' ' << j+5 << endl;
//                     return 0;
//                 }
//             }
//         }
//     }
//     return 0;
// } 

#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int di[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dj[] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main(){
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i, 0, h) cin >> s[i];
    string T = "snuke";
    rep(si, 0, h)rep(sj, 0, w) {
        rep(v, 0, 8){
            int i = si, j = sj;
            rep(k, 0, 5){
                if(i<0 || j<0 || i>=h || j>=w) break;
                if(s[i][j] != T[k]) break;
                if(k == 4){
                    i = si; j = sj;
                    rep(nk, 0, 5) {
                        printf("%d %d\n", i+1, j+1);
                        i += di[v]; j += dj[v];
                    }
                    return 0;
                }
                i += di[v]; j += dj[v];
            }
        }
    }

    return 0;
} 