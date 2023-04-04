#include <bits/stdc++.h>
using namespace std;

int N, K;
vector<string> S;

int main(){
    cin >> N >> K;
    for(int i = 0; i < N; i++){
        string s;
        cin >> s;
        if(i < K) S.push_back(s);
    }

    sort(S.begin(), S.end());
    for(int i = 0; i < K; i++) cout << S[i] << endl;
} 