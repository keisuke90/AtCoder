#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, P, Q, R, S;
    int A[109], B[109];
    int range;

    cin >> N >> P >> Q >> R >> S;
    for(int i = 1; i <= N; i++) cin >> A[i];
    range = R-P;

    for(int i = 1; i <= N; i++){
        if(P <= i && i <= Q){
            B[i+range] = A[i];
        } else if (R <= i && i <= S){
            B[i-range] = A[i];
        } else {
            B[i] = A[i];
        }
    }

    for(int i = 1; i <= N; i++) cout << B[i] << endl;
} 