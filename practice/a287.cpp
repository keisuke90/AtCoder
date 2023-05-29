#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    int count = 0;
    cin >> N;
    
    for(int i = 0; i < N; i++){
        string s;
        cin >> s;
        if(s == "For") count++;
    }

    if(N/2 < count){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
} 