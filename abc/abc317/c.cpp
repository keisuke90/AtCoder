#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> citys;
    vector<vector<int>> vec(n+1, vector<int>(n+1, 0));

    rep(i, 1, n+1) {
        citys.push_back(i);
    }

    rep(i, 0, m) {
        int a, b, c;
        cin >> a >> b >> c;
        vec[a][b] = c;
        vec[b][a] = c;
    }

    long long ans = 0;
    do {
        long long tmp = 0;
        rep(i, 1, n) {
            if(vec[citys[i-1]][citys[i]] == 0 ) break;
            tmp += vec[citys[i-1]][citys[i]];
        }
        ans = max(ans, tmp);
    } while(next_permutation(citys.begin(), citys.end()));

    cout << ans << endl;
    return 0;
} 