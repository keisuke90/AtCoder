#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    string s;
    cin >> n >> s;

    rep(i, 0, n - 2) {
        if(s[i] == 'A') {
            if(s[i+1] == 'B') {
                if(s[i+2] == 'C') {
                    cout << i + 1 << endl;
                    return 0;
                }
            }
        }
    }
    cout << -1 << endl;
    return 0;
} 