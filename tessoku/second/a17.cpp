#include <bits/stdc++.h>
#define rep(i, start, end) for(int i = start; i < end; i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[100009], b[100009], dp[100009];
    vector<int> route;
    rep(i, 2, n+1) cin >> a[i];
    rep(i, 3, n+1) cin >> b[i];
    dp[0] = 0;
    dp[1] = 0;
    dp[2] = a[2];
    rep(i, 3, n+1) {
        dp[i] = min(dp[i-1]+a[i], dp[i-2]+b[i]);
    }

    int place = n;
    while(true){
        route.push_back(place);
        if(place == 1) break;

        if(dp[place-1]+a[place] == dp[place]) place--;
        else place-=2;
    }
    reverse(route.begin(), route.end());

    cout << route.size() << endl;
    rep(i, 0, route.size()) cout << route[i] << ' ';
    cout << endl;
 
    return 0;
} 