#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s;
    long long k;
    cin >> s >> k;

    for(int i = 0; i < min(k, (long long)s.size()); i++) {
        if(s[i] != '1') {
            cout << s[i] << endl;
            return 0;
        }
    }
    cout << 1 << endl;

    return 0;
} 