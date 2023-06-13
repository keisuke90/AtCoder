#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, K;
    string S;
    cin >> N >> K >> S;
    int count = 0;
    string ans = "No";

    for(int i = 0; i < N; i++){
        if(S[i]=='1') count ++;
    }

    if((count-K)%2==0) ans = "Yes";
    

    cout << ans << endl;
} 