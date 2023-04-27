#include <bits/stdc++.h>
using namespace std;

int N, Q, A[200009], state = 1;

int main(){
    cin >> N >> Q;
    for(int i = 1; i <= N; i++) A[i]=i;
    
    for(int i = 0; i < Q; i++){
        int a, b, c;
        cin >> a;
        if(a == 1){
            cin >> b >> c;
            if(state == 1) A[b] = c;
            if(state == 2) A[N+1-b] = c;
        } else if (a == 2){
            if(state == 1) state = 2;
            else state = 1;
        } else if (a == 3){
            cin >> b;
            if(state == 1) cout << A[b] << endl;
            if(state == 2) cout << A[N+1-b] << endl;
        }
    }
} 