#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int q;
    cin >> q;
    vector<int> vec;
    int n = 0;
    rep(i, 0, q) {
        int a, b;
        cin >> a >> b;
        if(a == 1) {
            n++;
            vec.push_back(b);
        } else {
            cout << vec[n-b] << endl;
        }
    }

    return 0;
} 