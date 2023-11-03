#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s;
    cin >> s;
    int a = 6/s.size();
    rep(i, 0, a) {
        cout << s;
    }
    cout << endl;
    return 0;
} 