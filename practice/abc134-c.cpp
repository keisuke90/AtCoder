#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> vec(n);
    rep(i, 0, n) cin >> vec[i];
    vector<int> vec2 = vec;
    sort(vec2.begin(), vec2.end());
    int m1 = vec2[n-1];
    int m2 = vec2[n-2];
    rep(i, 0, n) {
        if(vec[i] == m1) cout << m2 << endl;
        else cout << m1 << endl;
    }
    return 0;
} 