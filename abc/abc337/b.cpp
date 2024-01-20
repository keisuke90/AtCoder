#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s;
    cin >> s;
    string s2 = s;
    sort(s2.begin(), s2.end());
    if(s==s2) cout << "Yes" << endl;
    else cout << "No" << endl;


    return 0;
} 