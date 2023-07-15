#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int n, m;
bool check(vector<bool>a, vector<bool>b) {
    rep(i, 1, m+1) {
        if(b[i] && !a[i]) return false;
    }
    return true;
}
bool count(vector<bool>a, vector<bool>b) {
    int A = 0, B = 0;
    rep(i, 1, m+1) {
        if(a[i]) A++;
        if(b[i]) B++;
    }
    return A > B;
}

int main(){
    cin >> n >> m;
    int p[109];
    vector<vector<bool>> f(109, vector<bool>(109));
    rep(i, 1, n+1) {
        cin >> p[i];
        int c;
        cin >> c;
        rep(j, 1, c+1) {
            int a;
            cin >> a;
            f[i][a] = true;
        }
    }
    // rep(i, 1, n+1) {
    //     cout << p[i] << ' ';
    //     rep(j, 1, m+1) cout << f[i][j] << ' ';
    //     cout << endl;
    // }
    string ans = "No";
    rep(i, 1, n) {
        rep(j, i+1, n+1) {
            if(p[i] == p[j]) {
                if(check(f[i], f[j])) {
                    if(count(f[i], f[j])) {
                        // cout << "1" << ':' <<  p[i] << ' ' << p[j] << endl;
                        ans = "Yes";
                        break;
                    }
                }
                if(check(f[j], f[i])) {
                    if(count(f[j], f[i])) {
                        ans = "Yes";
                        break;
                    }
                }
            }
            if(p[i] > p[j]) {
                if(check(f[j], f[i])) {
                    // cout << "1" << ':' <<  p[i] << ' ' << p[j] << endl;
                    ans = "Yes";
                    break;
                }
            }
            if(p[i] < p[j]) {
                if(check(f[i], f[j])) {
                    // cout << "3" << ':' <<  p[i] << ' ' << p[j] << endl;
                    ans = "Yes";
                    break;
                }
            }
        }
    }

    cout << ans << endl;
    return 0;
} 