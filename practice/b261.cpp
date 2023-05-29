#include <bits/stdc++.h>
using namespace std;

string A[1009];

int main(){
    int N;
    cin >> N;
    string ans = "correct";

    for(int i = 0; i < N; i++) cin >> A[i];

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(i == j) continue;
            if(A[i][j]=='W'){
                if(A[j][i]!='L') ans = "incorrect";
            }
            if(A[i][j]=='L'){
                if(A[j][i]!='W') ans = "incorrect";
            }
            if(A[i][j]=='D'){
                if(A[j][i]!='D') ans = "incorrect";
            }
        }
    }

    cout << ans << endl;
} 