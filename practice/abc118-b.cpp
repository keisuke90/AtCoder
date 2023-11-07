#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> vec(m+1);
    rep(i, 0, n) {
        int k;
        cin >> k;
        rep(j, 0, k) {
            int a;
            cin >> a;
            vec[a]++;
        }
    }
    int cnt = 0;
    rep(i, 1, m+1) {
        if(vec[i] == n) cnt++;
    }
    cout << cnt << endl;

    return 0;
} 