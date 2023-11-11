#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    set<string> s;
    map<string, int> red, blue;
    rep(i, 0, n) {
        string S;
        cin >> S;
        s.insert(S);
        red[S]+=1;
    }
    int m;
    cin >> m;
    rep(i, 0, m) {
        string S;
        cin >> S;
        s.insert(S);
        blue[S]+=1;
    }

    int ans = 0;
    for(string a : s) {
        int tmp = 0;
        tmp+=red[a];
        tmp-=blue[a];
        ans=max(ans, tmp);
    }
    cout << ans << endl;
    return 0;
} 