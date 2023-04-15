#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    string S;
    string ans = "No";
    bool check1 = false;
    bool check2 = true;

    cin >> N >> S;
    for(int i = 0; i < N; i++){
        if(S[i]=='o') check1 = true;
        if(S[i]=='x') check2 = false;
    }
    if(check1 && check2) ans = "Yes";

    cout << ans << endl;
} 