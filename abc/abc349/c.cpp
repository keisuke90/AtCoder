#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s,t;
    cin >> s >> t;

    if(t[t.size()-1] == 'X') t.pop_back();

    int ti = 0;
    for (char c : s) {
        if (ti < t.size() && t[ti] == toupper(c)) {
            ti++;
        }
    }

    if (ti == t.size()) cout << "Yes" << endl;
    else cout << "No" << endl;


    return 0;
} 