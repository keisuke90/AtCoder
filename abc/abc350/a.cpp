#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s;
    cin >> s;
    s = s.substr(3);
    int ans = stoi(s);

    if(ans > 0 && ans != 316 && ans < 350) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
} 