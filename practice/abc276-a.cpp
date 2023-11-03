#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s;
    cin >> s;
    
    for(int i = s.size()-1; i>=0; i--) {
        if(s[i] == 'a') {
            cout << i+1 << endl;
            return 0;
        }
    }
    cout << -1 <<endl;
    return 0;
} 