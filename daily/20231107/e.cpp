#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    string s;
    int k;
    cin >> s >> k;
    sort(s.begin(), s.end());
    int i = 0;
    do {
        i++;
        if(i == k) {
            cout << s << endl;
            return 0;
        }
    } while(next_permutation(s.begin(), s.end()));

    return 0;
} 