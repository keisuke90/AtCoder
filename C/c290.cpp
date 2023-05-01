#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, K;
    set<int> A;

    cin >> N >> K;
    for(int i = 0; i < N; i++){
        int a;
        cin >> a;
        A.insert(a);
    }
    for(int i = 0; i < K; i++){
        if(A.find(i) == A.end()){
            cout << i << endl;
            return 0;
        }
    }
    cout << K << endl;
} 