#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    int ans = 1;
    cin >> a >> b;

    // cout << pow(a, b) << endl;

    for(int i = 0; i < b; i++) ans *= a;
    cout << ans << endl;
} 