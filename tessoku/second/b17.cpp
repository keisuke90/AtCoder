#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    int p[100009], dp[100009];
    p[0] = 0;
    rep(i, 1, n+1) cin >> p[i];
    dp[0] = 0;
    dp[1] = 0;
    dp[2] = abs(p[1]-p[2]);
    rep(i, 3, n+1) dp[i] = min(dp[i-1]+abs(p[i]-p[i-1]),  dp[i-2]+abs(p[i]-p[i-2]));

    vector<int> route;
    int pos = n;
    while(true){
        route.push_back(pos);
        if(pos <= 1) break;

        if(dp[pos] == dp[pos-1]+abs(p[pos]-p[pos-1])) pos--;
        else pos -=2;
    }

    reverse(route.begin(), route.end());
    cout << route.size() << endl;
    rep(i, 0, route.size()) cout << route[i] << ' ';
    cout << endl;
    
    return 0;
} 