#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    set<int> s;
    rep(i, 0, 5) {
        int a;
        cin >> a;
        s.insert(a);
    }
    cout << s.size() << endl;
    return 0;
} 