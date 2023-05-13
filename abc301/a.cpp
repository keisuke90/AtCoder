#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int N;
    int t = 0;
    int a = 0;
    char win = '.';
    string S;
    cin >> N >> S;
    rep(i, 0, N){
        if(S[i] == 'T') {
            t++;
            if(t == N/2 && win == '.') win = 'T';
        }
        if(S[i] == 'A') {
            a++;
            if(a == N/2 && win == '.') win = 'A';
        }
    }

    if(t == a) {
        cout << win << endl;
        return 0;
    }
    if(t > a) cout << 'T' << endl;
    else cout << 'A' << endl;


    return 0;
} 