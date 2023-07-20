#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    int ret = 0;
    cin >> n;
    rep(i, 0, n) {
        char c;
        int a;
        cin >> c >> a;
        if(c == '+') ret+=a;
        else if (c == '-') ret-=a;
        else if (c == '*') ret*=a;

        if(ret < 0) ret += 10000;
        ret %= 10000;
        cout << ret << endl;
    }
    return 0;
} 