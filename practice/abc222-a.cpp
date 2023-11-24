#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string n;
    cin >> n;

    while(n.size() < 4) {
        n = '0'+n;
    }
    cout << n << endl;
    return 0;
} 