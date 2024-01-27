#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s;
    cin >> s;
    if(!isupper(s[0])) {
        cout << "No" << endl;
        return 0;
    }

    rep(i, 1, s.size()) {
        if(!islower(s[i])) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
} 