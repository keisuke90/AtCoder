#include <bits/stdc++.h>
using namespace std;

int N, S[100009], A[100009];

int main(){
    cin >> N;
    for(int i = 1; i <= N; i++) cin >> S[i];

    A[1] = S[1];
    for(int i = 2; i <= N; i++) A[i] = S[i] - S[i-1];
    for(int i = 1; i <= N; i++) cout << A[i] << " ";
    cout << endl;
} 