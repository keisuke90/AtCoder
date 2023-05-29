#include <bits/stdc++.h>
using namespace std;

long long N, T;
long long C[200009], R[200009];
bool check = false;
long long color;
long long ans;

int main(){
    int max = 0;
    cin >> N >> T;
    for(int i = 0; i < N; i++){
        cin >> C[i];
        if(C[i] == T) check = true;
    }
    for(int i = 0; i < N; i++)cin >> R[i];

    if(check) color = T;
    else color = C[0];

    for(int i = 0; i < N; i++){
        if(C[i]==color){
            if(R[i] > max){
                max = R[i];
                ans = i+1;
            }
        }
    }

    cout << ans << endl;
}