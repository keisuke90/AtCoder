#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, a, b;
    cin>>n>>a>>b;
    string s;
    cin >> s;

    int total = 0;
    int kaigai = 0;

    rep(i, 0, n) {
        if(s[i] == 'a') {
            if(total < a+b) {
                cout << "Yes" << endl;
                total++;
            } else {
                cout << "No" << endl;
            }
        } else if (s[i] == 'b') {
            if(kaigai < b && total < a+b) {
                cout << "Yes" << endl;
                total++;
                kaigai++;
            } else {
                cout << "No" << endl;
            }
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
} 