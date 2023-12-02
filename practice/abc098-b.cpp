#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    string s;
    cin >> n >> s;
    int ans = 0;
    rep(i, 1, n) {
        string s1 = s.substr(0, i);
        string s2 = s.substr(i, n-i);
        map<char, int> mp;
        int tmp = 0;
        rep(j, 0, s1.size()) mp[s1[j]]=1;
        rep(j, 0, s2.size()) {
            if(mp[s2[j]]==1) {
                mp[s2[j]]++;
                tmp++;
            }
        }
        ans = max(ans, tmp);
    }
    cout << ans << endl;
    return 0;
} 