#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, A[100009], Q;
    int a, b, c;

    cin >> N;
    for(int i = 1; i <= N; i++) cin >> A[i];
    cin >> Q;
    for(int i = 0; i < Q; i++){
        cin >> a;
        if(a==1){
            cin >> b >> c;
            A[b] = c;
        }else{
            cin >> b;
            cout << A[b] << endl;
        }
    }

} 