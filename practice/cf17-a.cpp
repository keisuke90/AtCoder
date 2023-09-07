#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s;
    cin >> s;
    vector<string> akb = {"KIHBR", "AKIHBR", "KIHABR", "KIHBAR", "KIHBRA", "AKIHABR", "AKIHBAR", "AKIHBRA", "KIHABAR", "KIHABRA", "KIHBARA", "AKIHABAR", "AKIHABRA", "AKIHBARA", "KIHABARA", "AKIHABARA"};
    rep(i, 0, akb.size()) {
        if(s == akb[i]) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
} 