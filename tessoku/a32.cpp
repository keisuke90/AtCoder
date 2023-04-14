#include <bits/stdc++.h>
using namespace std;

int N, A, B;
bool dp[100009];

int main(){
    cin >> N >> A >> B;

    for(int i = 0; i <= N; i++){
        if(i >= A && !dp[i-A]) dp[i] = true;
        else if (i >= B && !dp[i-B]) dp[i] = true;
        else dp[i] = false;
    }

    if(dp[N]) cout << "First" << endl;
    else cout << "Second" << endl;
} 