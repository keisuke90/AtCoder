#include <bits/stdc++.h>
using namespace std;

int N;
char B;
string S;

int main(){
    cin >> N >> B >> S;
    int score = 0;
    string ans = "No";
    
    for(int i = 0; i < N; i++){
        if(S[i] == 'R') score += 2;
        if(S[i] == 'B') score += 1;
    }

    if(score%3 == 0 && B == 'W') ans = "Yes";
    if(score%3 == 1 && B == 'B') ans = "Yes";
    if(score%3 == 2 && B == 'R') ans = "Yes";

    cout << ans << endl;
} 