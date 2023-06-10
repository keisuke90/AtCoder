#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    vector<int> a = {0, 3, 1, 4, 1, 5, 9};
    vector<int> b(7);
    char x, z;
    cin >> x >> z;
    int p = x - 65;
    int q = z - 65;

    rep(i, 1, 7) {
        b[i] = a[i] + b[i - 1];
    }

    if(p > q) {
        cout << b[p] - b[q] << endl;
    } else {
        cout << b[q] - b[p] << endl;
    }

    return 0;
} 