#include <bits/stdc++.h>
using namespace std;

int N, M;
string S[1000], T[1000];

int main(){
    int count = 0;
    cin >> N >> M;
    for(int i = 0; i < N; i++) cin >> S[i];
    for(int i = 0; i < M; i++) cin >> T[i];

    bool match = false;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(S[i].substr(3) == T[j]) match = true;
        }
        if(match) count++;
        match = false;
    }
    cout << count << endl;
} 