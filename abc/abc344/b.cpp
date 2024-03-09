#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    vector<int> vec;
    int a;
    while(true) {
        cin >> a;
        vec.push_back(a);
        if(a==0) break;
    }
    reverse(vec.begin(), vec.end());
    rep(i, 0, vec.size()) {
        cout << vec[i] << endl;
    }

    return 0;
} 