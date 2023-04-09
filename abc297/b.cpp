#include <bits/stdc++.h>
using namespace std;

string S, ans = "No";
bool check1 = false;
bool check2 = false;


int main(){
    cin >> S;
    for(int i = 0; i < S.size(); i++){
        if(S[i]=='B'){
            for(int j = i+1; j < S.size(); j++){
                if(S[j]=='B'){
                    if(i%2 != j%2) check1 = true;
                }
            }
        }

        if(S[i]=='R'){
            for(int j = i+1; j < S.size(); j++){
                if(S[j]=='R'){
                    for(int k = 0; k < S.size(); k++){
                        if(S[k]=='K'){
                            if(i < k && k < j) check2 = true;
                        }
                    }
                }
            }
        }
        
        if(check1 && check2) ans = "Yes";
    }
    
    cout << ans << endl;
} 