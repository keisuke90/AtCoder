#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;

    int m = 0;
    while((1<<m) < n) m++;
    cout << m << endl;

    rep(i, 0, m) {
        vector<int> a;
        rep(j, 0, n) {
            if(j&(1<<i)) a.push_back(j);
        }
        cout << a.size();
        for(int j : a) cout << ' ' << j+1;
        cout << endl;
    }

    string s;
    cin >> s;
    int ans = 0;
    rep(i, 0, m) {
        if(s[i] == '1') ans += 1<<i;
    }
    cout << ans+1 << endl;
    return 0;
} 