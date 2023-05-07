#include <bits/stdc++.h>
using namespace std;

int N, M;
int A[100009], B[100009];
vector<int> st[100009];

int main(){
    cin >> N >> M;
    for(int i = 1; i <= M; i++){
        cin >> A[i] >> B[i];
        st[A[i]].push_back(B[i]);
        st[B[i]].push_back(A[i]);
    }

    int f = 0;
    int id = 0;

    for(int i = 1; i <= N; i++){
        if(f < st[i].size()){
            f = st[i].size();
            id = i;
        }
    }
    cout << id << endl;
} 