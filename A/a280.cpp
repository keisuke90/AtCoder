#include <bits/stdc++.h>
using namespace std;

int main(){
    int H, W, count = 0;
    string S;
    cin >> H >> W;
    for(int i = 0; i < H; i++){
        cin >> S;
        for(int j = 0; j < W; j++){
            if(S[j]=='#') count++;
        }
    }    
    cout << count << endl;
} 