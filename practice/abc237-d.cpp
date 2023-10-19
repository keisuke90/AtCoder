#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    string s;
    cin >> n >> s;
    vector<int> L, R;

    rep(i, 0, n) {
        if(s[i] == 'L') R.push_back(i);
        if(s[i] == 'R') L.push_back(i);
        if(i == n-1) L.push_back(i+1);
    }

    reverse(R.begin(), R.end());

    for(int l : L) cout << l << ' ';
    for(int r : R) cout << r << ' ';

    return 0;
} 