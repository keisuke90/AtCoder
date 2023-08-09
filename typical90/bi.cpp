#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    vector<int> vec;
    int q;
    cin >> q;
    rep(i, 0, q) {
        int a, b;
        cin >> a >> b;

        if(a == 1) vec.insert(vec.begin(), b);
        else if(a == 2) vec.push_back(b);
        else cout << vec[b-1] << endl;
    }

    return 0;
} 