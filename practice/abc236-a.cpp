#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s;
    cin >> s;
    int a, b;
    cin >> a >> b;
    a--;b--;

    rep(i, 0, s.size()) {
        if(i == a) {
            cout << s[b];
        } else if (i==b) {
            cout << s[a];
        } else {
            cout << s[i];
        }
    }
    cout << endl;


    return 0;
} 