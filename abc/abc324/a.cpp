#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> vec(n);
    bool ok = true;
    rep(i, 0, n) cin >> vec[i];

    rep(i, 1, n) {
        if(vec[i] != vec[i-1]) ok = false;
    }

    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
} 