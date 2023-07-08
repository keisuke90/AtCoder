#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    string ans = "No";
    if(a+1 == b && a%3 != 0) ans = "Yes";
    cout << ans << endl;
    return 0;
} 