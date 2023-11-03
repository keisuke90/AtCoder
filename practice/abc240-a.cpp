#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    if(b == 10 && a ==1) {
        cout << "Yes" << endl;
    } else if (abs(a-b) == 1) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
} 