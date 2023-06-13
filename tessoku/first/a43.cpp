#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, L, A;
    char B;
    int ans = 0;

    cin >> N >> L;

    for(int i = 0; i < N; i++){
        cin >> A >> B;
        if(B == 'E') ans = max(ans, L-A);
        else ans = max(ans, A);
    }
    
    cout << ans << endl;
} 