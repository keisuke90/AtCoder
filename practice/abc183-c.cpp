#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<vector<int>> vec(n, vector<int>(n));
    rep(i, 0, n) {
        rep(j, 0, n) cin >> vec[i][j];
    }
    vector<int> v;
    rep(i, 1, n) v.push_back(i);
    int cnt = 0;
    do {
        long long tmp = 0;
        int pos = 0;
        rep(i, 0, n-1) {
            tmp+=vec[pos][v[i]];
            pos=v[i];
        }
        tmp+=vec[pos][0];
        if(tmp == k) cnt++;
    } while(next_permutation(v.begin(), v.end()));
    cout << cnt << endl;
    return 0;
} 