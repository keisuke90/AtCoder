#include <bits/stdc++.h>
using namespace std;

int H, W;
string S[109];
char pre;

int main(){
    cin >> H >> W;
    for(int i = 0; i < H; i++) cin >> S[i];

    for(int i = 0; i < H; i++){
        for(int j = 0; j < W-1; j++){
            if(S[i][j] == 'T' && S[i][j+1] == 'T'){
                S[i][j] = 'P';
                S[i][j+1] = 'C';
            }
        }
    }

    for(int i = 0; i < H; i++) cout << S[i] << endl;
}