#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M, count = 0;
    bool ok;
    string S[1000];
    cin >> N >> M;
    for(int i = 0; i < N; i++) cin >> S[i];

    for(int i = 0; i < N; i++){
        for(int j = i+1; j < N; j++){
            ok = true;
            for(int k = 0; k < M; k++){
                if(S[i][k] == 'x' && S[j][k] == 'x') ok = false;
            }
            if(ok)count++;
        }
    }
    cout << count << endl;
} 