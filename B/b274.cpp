#include <bits/stdc++.h>
using namespace std;

int H, W;
char X[1009][1009];
string S;

int main(){
    cin >> H >> W;
    for(int i = 0; i < H; i++){
        cin >> S;
        for(int j = 0; j < W; j++) X[i][j] = S[j];
    }

    for(int i = 0; i < W; i++){
        int a = 0;
        for(int j = 0; j < H; j++){
            if(X[j][i] == '#') a++;
        }
        cout << a << " ";
    }
} 