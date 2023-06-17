#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    string s;
    cin >> n >> s;

    rep(i, 0, n){
        rep(j, 0, 2){
            cout << s[i];
        }
    } 
    cout << endl;

    return 0;
} 