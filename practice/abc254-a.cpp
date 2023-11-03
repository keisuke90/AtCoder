#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string n;
    cin >> n;

    if(n.size() > 2) {
        cout << n[1] << n[2] << endl;
    } else {
        cout << n[0] << n[1] << endl;
    }

    return 0;
} 