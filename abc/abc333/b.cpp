#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s, t;
    cin >> s >> t;

    int s1, s2, t1, t2;
    rep(i, 0, 2) {
        if(s[0]=='A') s1=0;
        else if(s[0]=='B') s1=1;
        else if(s[0]=='C') s1=2;
        else if(s[0]=='D') s1=3;
        else if(s[0]=='E') s1=4;
        if(s[1]=='A') s2=0;
        else if(s[1]=='B') s2=1;
        else if(s[1]=='C') s2=2;
        else if(s[1]=='D') s2=3;
        else if(s[1]=='E') s2=4;
        if(t[0]=='A') t1=0;
        else if(t[0]=='B') t1=1;
        else if(t[0]=='C') t1=2;
        else if(t[0]=='D') t1=3;
        else if(t[0]=='E') t1=4;
        if(t[1]=='A') t2=0;
        else if(t[1]=='B') t2=1;
        else if(t[1]=='C') t2=2;
        else if(t[1]=='D') t2=3;
        else if(t[1]=='E') t2=4;
    }

    int s_d = 0;
    int t_d = 0;

    if(abs(s1-s2)==1 || abs(s1-s2)==4) s_d = 1;
    else s_d = 2;
    if(abs(t1-t2)==1 || abs(t1-t2)==4) t_d = 1;
    else t_d = 2;

    if(s_d == t_d) cout << "Yes" << endl;
    else cout << "No" << endl;
    


    return 0;
} 