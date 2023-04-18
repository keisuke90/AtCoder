#include <bits/stdc++.h>
using namespace std;

int main(){
    int R, C;
    cin >> R >> C;
    string ans;

    if(max(abs(8-R), abs(8-C))%2 == 0) ans = "white";
    else ans = "black";

    cout << ans << endl;
} 