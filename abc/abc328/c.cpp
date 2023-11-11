#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    vector<int> vec(n);
    rep(i, 0, n-1) {
        if(s[i]==s[i+1]) vec[i]++;
    }
    rep(i, 1, n-1) vec[i]+=vec[i-1];

    rep(i, 0, q) {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        cout << vec[r-1] - vec[l-1] << endl;
    }

    return 0;
} 