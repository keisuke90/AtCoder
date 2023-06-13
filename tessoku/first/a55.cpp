#include <bits/stdc++.h>
using namespace std;

int main(){
    int Q, type[100009], x[100009];
    cin >> Q;
    for(int i = 1; i <= Q; i++){
        cin >> type[i] >> x[i];
    }

    set<int> S;
    for(int i = 1; i <= Q; i++){
        if(type[i] == 1) S.insert(x[i]);
        if(type[i] == 2) S.erase(x[i]);
        if(type[i] == 3) {
            auto itr = S.lower_bound(x[i]);
            if(itr == S.end()) cout << -1 << endl;
            else cout << (*itr) << endl;
        }
    }

} 