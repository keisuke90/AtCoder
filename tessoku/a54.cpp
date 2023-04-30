#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string, int> mp;
    int Q;
    cin >> Q;
    int q, point;
    string name = "";

    for(int i = 0; i < Q; i++){
        cin >> q;
        if(q == 1){
            cin >> name >> point;
            mp[name] += point;
        }
        if(q == 2){
            cin >> name;
            cout << mp[name] << endl;
        }
    }
} 