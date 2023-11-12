#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s;
    cin >> s;
    rotate(s.begin(), s.begin()+1, s.end());
    cout << s << endl;

    return 0;
} 