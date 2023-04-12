#include <bits/stdc++.h>
using namespace std;

string S, T;

int main(){
    cin >> S >> T;
    string ans = "No";

    for(int i = 0; i <= S.size() - T.size(); i++){
        if(S.size() < T.size()) break;
        if(S.substr(i, T.size()) == T) ans = "Yes";
    }
    cout << ans << endl;
} 