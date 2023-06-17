#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, a[300009];
    vector<int> vec(100009, 0);

    cin >> n;
    rep(i, 1, n*3+1) cin >> a[i];

    rep(i, 1, n*3+1) {
        vec[a[i]]++;
        if(vec[a[i]]==2) cout << a[i] << ' ';
    }
    cout << endl;

    return 0;
} 