#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string o, e;
    cin >> o >> e;

    rep(i, 0, o.size()-1) {
        cout << o[i] << e[i];
    }

    if(o.size() - e.size() == 0) {
        cout << o[o.size()-1] << e[e.size()-1] << endl;;
    } else {
        cout << o[o.size()-1] << endl;
    }

    return 0;
} 