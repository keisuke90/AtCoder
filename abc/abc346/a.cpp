#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> vec(n);
    rep(i, 0, n) cin >> vec[i];

    rep(i, 1, n) cout << vec[i]*vec[i-1] << ' ';
    cout << endl;

    return 0;
} 