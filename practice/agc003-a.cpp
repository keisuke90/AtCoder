#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s;
    cin >> s;

    int N = 0;
    int S = 0;
    int E = 0;
    int W = 0;

    rep(i, 0, s.size()) {
        if(s[i] == 'N') N++;
        if(s[i] == 'S') S++;
        if(s[i] == 'E') E++;
        if(s[i] == 'W') W++;
    }

    bool ok = true;
    if((N > 0 && S == 0 )|| (N == 0 && S > 0) || (E==0 && W>0) || (E > 0 && W==0)) ok = false;
    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
} 