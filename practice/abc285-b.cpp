#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    string s;
    cin >> n >> s;

    rep(i, 1, n) {
        int cnt = 0;
        rep(j, 0, n) {
            if(s[j]==s[j+i] || i+j>=n) {
                cout << cnt << endl;
                break;
            }
            if(s[j]!=s[j+i]) cnt++;
        }
    }
    return 0;
} 