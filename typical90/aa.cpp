#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    set<string> s;

    rep(i, 1, n+1) {
        string S;
        cin >> S;
        if(!s.count(S)) {
            s.insert(S);
            cout << i << endl;
        }
    }

    return 0;
} 