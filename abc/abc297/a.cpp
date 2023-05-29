#include <bits/stdc++.h>
using namespace std;

int n, d;

int main(){
    int t[109];
    cin >> n >> d;
    int ans = -1;

    for(int i = 0; i < n; i++) cin >> t[i];

    for(int i = 1; i < n; i++){
        if(t[i]-t[i-1] <= d){
            ans = t[i];
            break;
        }
    }

    cout << ans << endl;
} 