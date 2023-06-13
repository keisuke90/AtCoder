#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, K;
    cin >> N >> K;
    string ans = "No";
    int dist = N * 2 - 2;

    if(dist <= K && K%2 == 0) ans = "Yes";

    cout << ans << endl;
} 