#include <bits/stdc++.h>
using namespace std;

int main(){
    string S, T;
    cin >> S >> T;
    string ans = "No";

    if(T.substr(0, S.size())== S) ans = "Yes";

    cout << ans << endl;
} 