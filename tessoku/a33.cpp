#include <bits/stdc++.h>
using namespace std;

int N, A[100009];

int main(){
    cin >> N;
    for(int i = 1; i <= N; i++) cin >> A[i];

    int XOR_Sum = A[1];
    for(int i = 2; i <= N; i++) XOR_Sum = (XOR_Sum ^ A[i]);

    if(XOR_Sum != 0) cout << "First" << endl;
    if(XOR_Sum == 0) cout << "Second" << endl;
} 