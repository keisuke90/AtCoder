#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;

    int four = 0;
    int two = 0;
    int other = 0;
    rep(i, 0, n) {
        int a;
        cin >> a;
        if(a%4==0) four++;
        else if(a%2==0) two++;
        else other++;
    }

    if(four+1==other && n==(four+other)) cout << "Yes" << endl;
    else if(four < other) cout << "No" << endl;
    else cout << "Yes" << endl;
    return 0;
} 