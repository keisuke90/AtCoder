#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    vector<int> abc(3);
    rep(i, 0, 3) cin >> abc[i];
    sort(abc.begin(), abc.end());
    cout << abc[1] + abc[2] << endl;
    return 0;
} 