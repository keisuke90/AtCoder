#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    string S;
    set<pair<int, int>> T;
    string ans = "No";
    int x  = 0, y = 0;

    cin >> N >> S;

    T.insert(make_pair(x, y));
    for(int i = 0; i < N; i++){
        if(S[i] == 'U') y++;
        if(S[i] == 'D') y--;
        if(S[i] == 'R') x++;
        if(S[i] == 'L') x--;
        if(T.count(make_pair(x, y)) == 1) ans = "Yes";
        T.insert(make_pair(x, y));
    }

    cout << ans << endl;
} 
