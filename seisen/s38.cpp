#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int solve(string a, string b) {
    vector<vector<int> > vec(a.size()+1, vector<int>(b.size()+1));

    rep(i, 1, a.size()+1) {
        rep(j, 1, b.size()+1) {
            if(a[i-1] == b[j-1]) vec[i][j] = vec[i-1][j-1]+1;
            else vec[i][j] = max(vec[i-1][j], vec[i][j-1]);
        }
    }
    return vec[a.size()][b.size()];
}

int main(){
    int q;
    cin >> q;

    rep(i, 0, q) {
        string a, b;
        cin >> a >> b;
        cout << solve(a, b) << endl;
    }

    return 0;
} 