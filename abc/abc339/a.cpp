#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s;
    cin >> s;

    vector<char> v;

    for(int i = s.size()-1; i>=0; i--) {
        if(s[i] == '.') break;
        v.push_back(s[i]);
    }

    reverse(v.begin(), v.end());
    rep(i, 0, v.size()) {
        cout << v[i];
    }
    cout << endl;
    return 0;
} 