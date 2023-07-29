#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s;
    vector<string> target {"ACE","BDF","CEG","DFA","EGB","FAC","GBD"};
    cin >> s;
    if(find(target.begin(), target.end(), s) != target.end()) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
} 

// #include <bits/stdc++.h>
// #define rep(i, start, end) for(int i = start; i < end; i++)
// using namespace std;

// int main(){
//     string s;
//     cin >> s;
//     if(s=="ACE" || s=="BDF" || s=="CEG" || s=="DFA"|| s=="EGB" || s=="FAC"|| s=="GBD") {
//         cout << "Yes" << endl;
//     } else {
//         cout << "No" << endl;
//     }
//     return 0;
// } 