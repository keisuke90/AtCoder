#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int ans = 0;

int swapATC(vector<int> atc){
    while(atc != vector<int>({0, 1, 2, 3, 4, 5, 6})){
        rep(i, 0, 6){
            if(atc[i] > atc[i+1]){
                swap(atc[i], atc[i+1]);
                ans++;
                break;
            }
        }
    }
    return ans;
}

int main(){
    string S;
    cin >> S;
    vector<int> atc(7);
    rep(i, 0, 7){
        if(S[i] == 'a') atc[i] = 0;
        if(S[i] == 't') atc[i] = 1;
        if(S[i] == 'c') atc[i] = 2;
        if(S[i] == 'o') atc[i] = 3;
        if(S[i] == 'd') atc[i] = 4;
        if(S[i] == 'e') atc[i] = 5;
        if(S[i] == 'r') atc[i] = 6;
    }

    swapATC(atc);

    cout << ans << endl;

    return 0;
} 