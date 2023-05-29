#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    string S[11];

    cin >> N;
    for(int i = 0; i < N; i++) cin >> S[i];

    for(int i = N-1; i >= 0; i--){
        cout << S[i] << endl;
    }
} 