#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;

    string t1 = t.substr(0, n);
    string t2 = t.substr(m-n, n);

    if(s == t1 && s == t2) {
        cout << 0 << endl;
        return 0;
    } else if(s == t1) {
        cout << 1 << endl;
        return 0;
    } else if(s == t2) {
        cout << 2 << endl;
        return 0;
    }
    cout << 3 << endl;
    return 0;
} 