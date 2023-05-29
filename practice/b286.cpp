#include <bits/stdc++.h>
using namespace std;

int N;
string S;

int main(){
    cin >> N >> S;
    while(true){
        bool fin = 1;
        for(int i = 0; i < S.size()-1; i++){
            if(S.substr(i, 2) == "na"){
                S.insert(S.begin()+i+1, 'y');
                fin = 0;
                break;
            }
        }
        if(fin) break;
    }
    cout << S << endl;
} 