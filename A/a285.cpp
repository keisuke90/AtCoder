#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    string ans;

    if(b == a*2 || b == a*2+1){
        ans = "Yes";
    } else {
        ans = "No";
    }

    cout << ans << endl;
} 