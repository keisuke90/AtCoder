#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string a,b;
    cin >> a>> b;
    string ab = a+b;

    rep(i, 0, 100000) {
        int h = i*i;
        if(stoi(ab) == h) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;

    return 0;
} 