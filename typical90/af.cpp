#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> vec(n+1, vector<int>(n+1, 0));
    vector<vector<bool>> vec2(n+1, vector<bool>(n+1, true));

    rep(i, 1, n+1) {
        rep(j, 1, n+1) {
            cin >> vec[i][j];
        }
    }

    int m;
    cin >> m;
    rep(i, 0, m) {
        int a, b;
        cin >> a >> b;
        vec2[a][b] = false;
        vec2[b][a] = false;
    }

    vector<int> vec3(n);
    rep(i, 0, n) {
        vec3[i] = i+1;
    }

    int ans = 1000000000;
    do {
        bool ok = true;
        int sum = 0;
        rep(i, 0, n-1) {
            if(vec2[vec3[i]][vec3[i+1]] == false) ok = false;
        }
        rep(i, 0, n) sum += vec[vec3[i]][i+1];
        
        if(ok) ans = min(ans, sum);
    } while (next_permutation(vec3.begin(), vec3.end()));

    if(ans == 1000000000) cout << -1 << endl;
    else cout << ans << endl;
    return 0;
} 