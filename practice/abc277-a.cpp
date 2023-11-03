#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
    rep(i, 1, n+1) {
        int a;
        cin >> a;
        if(a == x) cout << i << endl;
    }
    
    return 0;
} 