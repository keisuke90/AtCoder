// #include <bits/stdc++.h>
// #define rep(i, start, end) for(int i = start; i < end; i++)
// using namespace std;

// int main(){
//     int n, q;
//     string s;
//     cin >> n >> s >> q;

//     map<char, char> mp1;
//     map<char, char> mp2;

//     rep(i, 0, q) {
//         char c, d;
//         cin >> c >> d;
//         if(mp2.count(c) == 0) {
//             mp1[c] = d;
//             mp2[d] = c;
//         } else {
//             mp1[c] = d;
//             mp1[mp2[c]] = d;
//             mp2[c] = d;
//         }
//     }
//     rep(i, 0, n) {
//         if(mp1[s[i]] == 0) cout << s[i];
//         else cout << mp1[s[i]];
//     }
//     cout << endl;

//     return 0;
// } 

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    string s;
    cin >> n >> s >> q;

    // 英小文字のための変換マップ
    vector<char> transform(26);
    for (char c = 'a'; c <= 'z'; ++c) {
        transform[c - 'a'] = c;
    }

    for (int i = 0; i < q; ++i) {
        char c, d;
        cin >> c >> d;
        for (int j = 0; j < 26; ++j) {
            if (transform[j] == c) {
                transform[j] = d;
            }
        }
    }

    for (char &c : s) {
        c = transform[c - 'a'];
    }
    cout << s << endl;

    return 0;
}
