#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, m, x, t, d;
    cin>>n>>m>>x>>t>>d;

    while(true) {
        if(n==m) {
            cout << t << endl;
            return 0;
        }
        n--;
        if(n < x) {
            t -=d;
        }
    }

    return 0;
} 