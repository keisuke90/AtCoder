#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;

    int i = 9;
    while(i >= 0) {
        cout << n/(1<<i) % 2;
        i--;
    }
    cout << endl;
    return 0;
} 