#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 9; i >= 0; i--) {
        int tmp = pow(2, i);
        cout << (n/tmp)%2;
    }
    cout << endl;

    return 0;
} 