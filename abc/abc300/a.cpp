#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, A, B;
    cin >> N >> A >> B;
    int c;
    int C = A + B;
    int ans;

    for(int i = 1; i <= N; i++){
        cin >> c;
        if(c == C) ans = i;
    }

    cout << ans << endl;
    
} 