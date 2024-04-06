#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    rep(i, 1, n+1) {
        if(i%3==0) cout << 'x';
        else cout << 'o';
    }
    cout << endl;
    return 0;
}