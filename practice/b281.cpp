#include <bits/stdc++.h>
using namespace std;

int main(){
    string S, ans = "Yes";
    cin >> S;

    if(S.size() != 8) ans = "No";
    if(!isupper(S[0])) ans = "No";
    if(!isupper(S[7])) ans = "No";
    if(S[1]=='0') ans = "No";
    for(int i = 1; i <= 6 ; i++) if(!isdigit(S[i])) ans = "No";

    cout << ans << endl;
} 