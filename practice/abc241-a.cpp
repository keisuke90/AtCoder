#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    vector<int> vec(10);
    rep(i, 0, 10) cin >> vec[i];
    cout << vec[vec[vec[0]]] << endl;

    return 0;
} 