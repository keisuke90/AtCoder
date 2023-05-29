#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int count = 0;

    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(s[i]=='v'){
            count++;
        }else{
            count +=2;
        }
    }
    cout << count << endl;
} 