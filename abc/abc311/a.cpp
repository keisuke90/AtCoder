#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    string s;
    cin >> n >> s;
    bool a = false, b=false, c=false;
    rep(i, 0, n) {
        if(s[i]=='A') a = true; 
        if(s[i]=='B') b = true; 
        if(s[i]=='C') c = true; 

        if(a && b && c) {
            cout << i+1 << endl;
            return 0;
        }
    }

    return 0;
} 