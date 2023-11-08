#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s;
    cin >> s;
    int a = 0;
    int b = 0;

    rep(i, 0, s.size()) {
        if(s[i] == 'A') {
            a = i;
            break;
        }
    }
    for(int i = s.size()-1; i >= 0; i--) {
        if(s[i] == 'Z') {
            b = i;
            break;
        }
    }
    cout << b - a + 1 << endl;

    return 0;
} 