#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s;
    cin >> s;
    sort(s.begin(), s.end());

    int ans = 0;
    do {
        rep(i, 0, s.size()) {
            rep(i, 1, s.size()) {
                string l = s.substr(0, i);
                string r = s.substr(i, s.size() - i);
                ans = max(ans, stoi(l) * stoi(r));
            }
        }
    } while (next_permutation(s.begin(), s.end()));

    cout << ans << endl;
    return 0;
} 