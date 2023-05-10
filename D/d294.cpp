#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, Q;
    int min = 0;
    set<int> called;
    cin >> N >> Q;
    for(int i = 0; i < Q; i++){
        int q;
        cin >> q;
        if(q == 1){
            min++;
            called.insert(min);
        }
        if(q == 2){
            int x;
            cin >> x;
            called.erase(x);
        }
        if(q == 3){
            cout << *called.begin() << endl;
        }
    }

    return 0;
} 