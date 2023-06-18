#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    rep(i, 0, 10) cout << n/(1 << (9-i))%2;
    cout << endl;  
    return 0;
} 