#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    char a,b,c;
    cin >> a >> b >> c;
    string abc = string({a, b, c});
    string bca = string({b, c, a});
    string cab = string({c, a, b});
    int ans = stoi(abc) + stoi(bca) + stoi(cab);
    cout << ans << endl;


    return 0;
} 