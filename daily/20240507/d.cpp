#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s1, s2, s3, t;
    cin >> s1 >> s2 >> s3 >> t;
    map<int, string> mp;
    mp[1] = s1;
    mp[2] = s2;
    mp[3] = s3;

    rep(i, 0, t.size()) {
        int a = t[i] - '0';
        cout << mp[a];
    }
    cout << endl;
    return 0;
} 