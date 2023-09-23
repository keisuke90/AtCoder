#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string n;
    cin >> n;

    if(n.size() == 1) {
        cout << "Yes" << endl;
        return 0;
    }

    bool ok = true;
    rep(i, 1, n.size()) {
        int a = n[i] - '0';
        int b = n[i-1] - '0';
        if(a >= b) ok = false;
    }

    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
} 