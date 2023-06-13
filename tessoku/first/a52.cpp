#include <bits/stdc++.h>
using namespace std;

int Q;
queue<string> S;
int q;
string x;



int main(){
    cin >> Q;
    
    for(int i = 0; i < Q; i++){
        cin >> q;

        if(q == 1){
            cin >> x;
            S.push(x);
        } else if(q == 2){
            cout << S.front() << endl;
        } else if(q == 3){
            S.pop();
        }
    }
} 