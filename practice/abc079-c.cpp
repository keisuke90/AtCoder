#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s;
    cin >> s;
    int a = s[0]-'0';
    int b = s[1]-'0';
    int c = s[2]-'0';
    int d = s[3]-'0';

    char op1, op2, op3;
    rep(i, 0, 2) {
        rep(j, 0, 2) {
            rep(k, 0, 2) {
                int sum = a;
                if(i==0) sum+=b;
                else sum-=b;
                if(j==0) sum+=c;
                else sum-=c;
                if(k==0) sum+=d;
                else sum-=d;
                if(sum==7) {
                    op1 = (i == 0 ? '+' : '-');
                    op2 = (j == 0 ? '+' : '-');
                    op3 = (k == 0 ? '+' : '-');
                    cout << a << op1 << b << op2 << c << op3 << d << "=7" << endl;
                    return 0;
                }
            }
        }
    }

    return 0;
} 