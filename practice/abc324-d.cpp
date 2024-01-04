#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    string s;
    cin >> n >> s;
    vector<int> sc(10);
    for(char c : s) sc[c-'0']++;
    int ans = 0;
    long long idx = 0;
    while(true) {
        string t = to_string(idx*idx);
        if(t.size() > s.size()) break;
        vector<int> tc(10);
        for(char c : t) tc[c-'0']++;
        tc[0] += s.size()-t.size();
        if(sc == tc) ans++;
        idx++;
    }
    cout << ans << endl;
    return 0;
} 