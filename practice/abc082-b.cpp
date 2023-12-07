#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end(), [](char left, char right){
        return left > right;
    });

    if(s<t) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
} 