#include <bits/stdc++.h>
using namespace std;

int N;
int h[100009], dp[100009];
vector<int> ans;

int main(){
    cin >> N;
    for(int i = 1; i <= N; i++) cin >> h[i];
    dp[1] = 0;
    dp[2] = abs(h[2]-h[1]);
    for(int i = 3; i <= N; i++){
        dp[i] = min(dp[i-1]+abs(h[i]-h[i-1]), dp[i-2]+abs(h[i]-h[i-2]));
    }

    int place = N;
    while(true){
        ans.push_back(place);
        if(place == 1) break;
        if(dp[place-1]+abs(h[place]-h[place-1]) == dp[place]){
            place -= 1;
        } else {
            place -= 2;
        }
    }

    reverse(ans.begin(), ans.end());

    cout << ans.size() << endl;
    for(int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
    cout << endl;
} 