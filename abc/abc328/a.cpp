#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
    int sum = 0;
    rep(i, 0, n) {
        int s;
        cin >> s;
        if(s <= x) sum+=s;
    }
    cout << sum << endl;
    return 0;
} 