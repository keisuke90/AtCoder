#include <bits/stdc++.h>
using namespace std;

int N, M;
int A[100009], B[100009];
vector<int> vec[100009];


int main(){
    cin >> N >> M;
    for(int i = 1; i <= M; i++){
        cin >> A[i] >> B[i];
        vec[A[i]].push_back(B[i]);
        vec[B[i]].push_back(A[i]);
    }

    for(int i = 1; i <= N; i++){
        cout << i << ": {";
        for(int j = 0; j < vec[i].size(); j++){
            if(j >= 1) cout << ", ";
            cout << vec[i][j];
        }
        cout << '}' << endl;
    }
} 