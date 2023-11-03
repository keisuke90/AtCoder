#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    if(a == c) {
        cout << e << ' ';
    } else if(a == e) {
        cout << c << ' ';
    } else {
        cout << a << ' ';
    }

    if(b==d) {
        cout << f << endl;
    } else if (b==f) {
        cout << d << endl;
    } else {
        cout << b << endl;
    }

    return 0;
} 