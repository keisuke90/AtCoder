#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    vector<queue<char>> vec(200009, queue<char>());
    vector<int> c(200009);
    

    rep(i, 0, n) {
        cin >> c[i];
        vec[c[i]].push(s[i]);
    }
    vector<bool> isFirst(200009, true);

    rep(i, 0, n) {
        if(isFirst[c[i]]) {
            isFirst[c[i]] = false;
            cout << vec[c[i]].back();
        } else {
            cout << vec[c[i]].front();
            vec[c[i]].pop();
        }
    }
    cout << endl;

    return 0;
} 