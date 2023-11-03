#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string hx = "0123456789ABCDEF";
    int n;
    cin >> n;
    
    string ans = "";
    if(n < 16) {
        ans.push_back('0');
        ans.push_back(hx[n]);
    } else {
        ans.push_back(hx[n/16]);
        n%=16;
        ans.push_back(hx[n]);
    }
    cout << ans << endl;
    return 0;
} 