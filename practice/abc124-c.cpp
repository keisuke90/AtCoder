#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s;
    cin >> s;

    vector<int> a(s.size());
    vector<int> b(s.size());
    int A = 1;
    int B = 0;
    rep(i, 0, s.size()) {
        a[i] = A;
        b[i] = B;
        A = abs(A-1);
        B = abs(B-1);
    }

    int ans1 = 0;
    int ans2 = 0;
    rep(i, 0, s.size()) {
        if(s[i]-'0' != a[i]) ans1++;
        if(s[i]-'0' != b[i]) ans2++;
    }
    cout << min(ans1, ans2) << endl;


    return 0;
} 