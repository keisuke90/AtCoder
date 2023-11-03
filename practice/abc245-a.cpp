#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int a, b, c, d;
    cin>>a>>b>>c>>d;

    if(a < c) {
        cout << "Takahashi" << endl;
    } else if(a > c) {
        cout << "Aoki" << endl;
    } else if(a == c) {
        if(d>b) {
            cout << "Takahashi" << endl;
        } else if(d < b) {
            cout << "Aoki" << endl;
        } else if (d==b) {
            cout << "Takahashi" << endl;
        }
    }

    return 0;
} 