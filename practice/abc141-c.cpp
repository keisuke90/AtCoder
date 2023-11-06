#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, k, q;
    cin >> n >> k >> q;
    vector<long long> vec(n);
    rep(i, 0, q) {
        int a;
        cin >> a;
        vec[a-1]++;
    }
    rep(i, 0, n) {
        if(k-q+vec[i] > 0) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
} 