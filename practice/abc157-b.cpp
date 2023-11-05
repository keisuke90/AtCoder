#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;
vector<vector<int>> A(3, vector<int>(3));
vector<vector<bool>> B(3, vector<bool>(3));

bool bingo() {
    rep(i, 0, 3) {
        if(B[i][0] && B[i][1] && B[i][2]) {
            return true;
        }
    }
    rep(i, 0, 3) {
        if(B[0][i] && B[1][i] && B[2][i]) {
            return true;
        }
    }

    if(B[0][0] && B[1][1] && B[2][2]) return true;
    if(B[0][2] && B[1][1] && B[2][0]) return true;

    return false;
}

int main(){
    rep(i, 0, 3) rep(j, 0, 3) cin >> A[i][j];
    int n;
    cin >> n;

    rep(i, 0, n) {
        int b;
        cin >> b;
        rep(j, 0, 3) rep(k, 0, 3) if(A[j][k] == b) B[j][k] = true;
    }

    cout << (bingo() ? "Yes" : "No") << endl;

    return 0;
} 