#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s;
    cin >> s;
    int t = 753;
    int ans = 10000;
    rep(i, 0, s.size()-2) {
        int x = stoi(s.substr(i, 3));
        ans = min(ans, abs(t-x));
    }
    cout << ans << endl;
    return 0;
} 