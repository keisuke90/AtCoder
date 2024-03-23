#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main() {
    int w, b;
    cin >> w >> b;

    string pattern = "wbwbwwbwbwbw";

    int total = w + b;
    bool exists = false;

    
    string extended_pattern = "";
    rep(i, 0, 20) {
        extended_pattern += pattern;
    }

    rep(start, 0, pattern.size()){
        int w_count = 0, b_count = 0;
        rep(i, start, start+total) {
            if (extended_pattern[i] == 'w') w_count++;
            else b_count++;
        }
        if (w_count == w && b_count == b) {
            exists = true;
            break;
        }
    }

    if (exists) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}