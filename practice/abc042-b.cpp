#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, l;
    cin >> n >> l;
    vector<string> vec(n);
    rep(i, 0, n) cin >> vec[i];
    sort(vec.begin(), vec.end());
    rep(i, 0, n) {
        cout << vec[i];
    }
    cout << endl;


    return 0;
} 