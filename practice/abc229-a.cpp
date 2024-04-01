#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s1, s2;
    cin >> s1 >> s2;

    if(s1[0] == '.' && s2[1] == '.') {
        cout << "No" << endl;
        return 0;
    }
    if(s1[1] == '.' && s2[0] == '.') {
        cout << "No" << endl;
        return 0;
    }
    cout << "Yes" << endl;
    return 0;
} 