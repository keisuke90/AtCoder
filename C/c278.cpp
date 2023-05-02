#include <bits/stdc++.h>
using namespace std;

int N, Q;
map<pair<int, int>, bool> user;

int main(){
    cin >> N >> Q;
    int q, a, b;
    for(int i = 0; i < Q; i++){
        cin >> q;
        if(q == 1){
            cin >> a >> b;
            user[make_pair(a, b)] = true;
        }
        if(q == 2){
            cin >> a >> b;
            user[make_pair(a, b)] = false;
        }
        if(q == 3){
            cin >> a >> b;
            if(user[make_pair(a, b)] && user[make_pair(b, a)]) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
} 