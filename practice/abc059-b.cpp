#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string a, b;
    cin >> a >> b;

    if(a.size()==b.size()) {
        if(a==b) cout << "EQUAL" << endl;
        else if(a>b) cout << "GREATER" << endl;
        else cout << "LESS" << endl;
    } else if (a.size()>b.size()) {
        cout << "GREATER" << endl;
    } else {
        cout << "LESS" << endl;
    }

    return 0;
} 