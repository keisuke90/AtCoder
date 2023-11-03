#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    vector<string> youb = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    string s;
    cin >> s;

    rep(i, 0, 5) {
        if(s == youb[i]) {
            cout << 5-i << endl;
        }
    }

    return 0;
} 