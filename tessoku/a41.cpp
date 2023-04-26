#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    string S;
    string ans = "No";

    cin >> N >> S;

    for(int i = 0; i < N-2; i++){
        if(S[i] == S[i+1] && S[i] == S[i+2]) ans = "Yes";
    }

    cout << ans << endl;
} 