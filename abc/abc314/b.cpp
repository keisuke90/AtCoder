#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> A(40, vector<int>());
    vector<int> B(109, 0);

    rep(i, 1, n+1) {
        int c;
        cin >> c;
        B[i] = c;
        rep(j, 0, c) {
            int a;
            cin >> a;
            A[a].push_back(i);
        }
    }
    int x;
    int z = 200;
    cin >> x;
    vector<int> ans;
    vector<int> ans2;
    rep(i, 0, A[x].size()) {
        ans.push_back(A[x][i]);
        z = min(z, B[A[x][i]]);
    }

    rep(i, 0, ans.size()) {
        if(B[ans[i]] == z) {
            ans2.push_back(ans[i]);
        }
    }
    cout << ans2.size() << endl;
    rep(i, 0, ans2.size()) {
        cout << ans2[i] << " ";
    }
    cout << endl;
    return 0;
} 