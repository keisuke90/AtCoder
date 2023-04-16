#include <bits/stdc++.h>
using namespace std;

int main(){
    string S[109];
    int A = 0, B = 0, C = 0, D = 0;
    for(int i = 1; i <= 10; i++){
        cin >> S[i];
    }
    
    for(int i = 1; i <= 10; i++){
        for(int j = 0; j < 10; j++){
            if(S[i][j]== '#'){
                A = i;
                C = j+1;
                break;
            }
        }
        if(A != 0){
            break;
        }
    }

    for(int i = 10; i >= 1; i--){
        for(int j = 9; j >= 0; j--){
            if(S[i][j]== '#'){
                B = i;
                D = j+1;
                break;
            }
        }
        if(B != 0){
            break;
        }
    }

    cout << A << ' ' << B << endl;
    cout << C << ' ' << D << endl;
    
} 