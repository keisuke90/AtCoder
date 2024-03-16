#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    long long x;
    cin >> x;

    string s = to_string(x);
    if(x > 0) {
        if(s[s.size()-1] == '0') {
            cout << x/10 << endl;
        } else {
            cout << x/10 + 1 << endl;
        }
    } else {
        cout << x/10  << endl;
    }

    return 0;
} 