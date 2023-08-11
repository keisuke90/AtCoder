#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

bool isRight(string s) {
    int cnt = 0;
    rep(i, 0, s.size()){
        if(cnt < 0) return false;
        if(s[i] == '(') cnt++;
        else cnt--;
    }

    if(cnt == 0) return true;
    else return false;
}

int main(){
    int n;
    cin >> n;
    for(int i = 0; i<(1<<n); i++) {
        string s = "";
        for(int j = n-1; j >= 0; j--) {
            if((i&(1 << j)) == 0) s += "(";
            else s+= ")";
        }
        if(isRight(s)) cout << s << endl;
    }

    return 0;
}