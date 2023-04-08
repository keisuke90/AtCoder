#include <bits/stdc++.h>
using namespace std;

int N;
bool Deleted[1000009];

int main(){
    cin >> N;
    for(int i = 2; i <= N; i++) Deleted[i] = false;
    for(int i = 2; i * i <= N; i++) {
        if(Deleted[i]) continue;
        for(int j = i*2; j <= N; j += i) Deleted[j] = true;
    }

    for(int i = 2; i <= N; i++) if(!Deleted[i]) cout << i << endl;
} 