#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, x;
    cin>>n>>x;
    string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int cnt = 0;
    rep(i, 0, s.size()) {
        rep(j, 0, n) {
            cnt++;
            if(cnt==x) {
                cout << s[i] << endl;
                return 0;
            }
        }
    }


    return 0;
} 