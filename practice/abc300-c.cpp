// #include <bits/stdc++.h>
// #define rep(i, start, end) for(int i = start; i < end; i++)
// using namespace std;

// vector<string> vec;
// int h, w;

// bool isCenter(int a, int b) {
//     if(a == 0 || a == h-1 || b == 0 || b == w-1) return false;
//     if(vec[a-1][b-1] == '#' && vec[a-1][b] == '.' && vec[a-1][b+1] == '#' && vec[a][b-1] == '.' && vec[a][b+1] == '.' && vec[a+1][b-1] == '#' && vec[a+1][b] == '.' && vec[a+1][b+1] == '#') {
//         return true;
//     }

//     return false;
// }

// int countSize(int a, int b, int cnt) {
//     a++;
//     b++;
//     if(a == h || b == w || vec[a][b] == '.') return cnt;
//     cnt++;
//     return countSize(a, b, cnt);
// }

// int main(){
//     cin >> h >> w;
//     int num = min(h, w);
//     vector<int> ans(num+1);
//     vec = vector<string>(h);
//     rep(i, 0, h) cin >> vec[i];
//     rep(i, 0, h) {
//         rep(j, 0, w) {
//             if(isCenter(i, j)) {
//                 int size = countSize(i, j, 0);
//                 ans[size]++;
//             }
//         }
//     }

//     rep(i, 1, num+1) cout << ans[i] << ' ';
//     cout << endl;
//     return 0;
// } 

#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

const int di[] = {-1, -1, 1, 1};
const int dj[] = {-1, 1, -1, 1};

int main(){
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i, 0, h) cin >> s[i];
    int n = min(h, w);
    vector<int> ans(n+1);

    rep(i, 0, h) {
        rep(j, 0, w) {
            if(s[i][j] != '#') continue;
            int cnt = 0;
            rep(v, 0, 4) {
                int ni = i+di[v], nj = j+dj[v];
                if(ni<0 || nj<0 || ni>=h || nj>=w) continue;
                if(s[ni][nj] == '#') cnt++;
            }
            if(cnt == 4) {
                int l = 0;
                int ni = i, nj = j;
                while(1) {
                    ni++; nj++;
                    if(ni == h || nj == w) break;
                    if(s[ni][nj] != '#') break;
                    l++;
                }
                ans[l]++;
            }
        }
    }
    rep(i, 1, n+1) cout << ans[i] << ' ';
    cout << endl;
    return 0;
} 