#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s;
    cin >> s;
    map<char, int> mp;
    rep(i, 0, 3) {
        mp[s[i]]+=1;
    }
    for(auto m : mp) {
        if(m.second == 1) {
            cout << m.first << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
} 