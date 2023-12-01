#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.size()+1;
    vector<int> vec(n);
    rep(i, 0, s.size()) {
        if(s[i]=='<') {
            vec[i+1] = max(vec[i+1], vec[i]+1);
        }
    }
    for(int i = s.size()-1; i >= 0; i--) {
        if(s[i]=='>') {
            vec[i] = max(vec[i], vec[i+1]+1);
        }
    }
    long long ans = 0;
    for(auto v : vec) ans+=v;
    cout << ans << endl;

    return 0;
} 