#include <bits/stdc++.h>
using namespace std;

int main(){
    int N[3];
    int odd = 0, even = 0;
    int ans = 1;
    for(int i = 0; i < 3; i++){
        cin >> N[i];
        if(N[i] % 2 == 0) even++;
        else odd++;
    }

    for(int i = 0; i < 3; i++){
        if(odd == 3 || even == 3) {
            ans--;
            break;
        }
        if(even > odd) {
            if(N[i]%2 == 0) N[i]++;
        }else {
            if(N[i]%2 == 1) N[i]++;
        }
    }
    
    int maxnum = max(N[0], max(N[1], N[2]));
    for(int i = 0; i < 3; i++){
        while(maxnum != N[i]){
            N[i] += 2;
            ans++;
        }
    }

    cout << ans << endl;
} 