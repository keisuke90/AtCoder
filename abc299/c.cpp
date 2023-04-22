#include <bits/stdc++.h>
using namespace std;



int main(){
    int N;
    string S;
    bool bou = false;
    int max = -1;
    int dango = 0;
    cin >> N;
    cin >> S;

    for(int i = 0; i < N; i++){
        if(S[i] == '-') bou = true;
        if(S[i] == 'o') dango++;
        if(S[i] == '-') {
            if(max < dango && dango > 0) max = dango;
            dango = 0;
        }
    }
    if(bou && max < dango && dango > 0) max = dango;

    cout << max << endl;
} 