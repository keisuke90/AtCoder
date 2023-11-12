#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

bool ten(int x) {
    string tmp = to_string(x);
    return tmp.find('7') != string::npos;
}

bool seven(int x) {
    string tmp = "";
    while(x>0) {
        tmp=to_string(x%8)+tmp;
        x/=8;
    }
    return tmp.find('7') != string::npos;
}

int main(){
    int n;
    cin >> n;

    int ans = 0;
    rep(i, 1, n+1) {
        if(!ten(i) && !seven(i)) ans++;
    }
    cout << ans << endl;
    return 0;
} 