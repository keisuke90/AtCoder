#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    string S;
    int count = 0;
    string ans = "out";

    cin >> N;
    cin >> S;

    for(int i = 0; i < N; i++){
        if(S[i]=='|' ) count ++;
        if(S[i]=='*'){
            if(count == 1) ans = "in";
        }
    }

    cout << ans << endl;
} 