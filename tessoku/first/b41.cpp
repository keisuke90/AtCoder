#include <bits/stdc++.h>
using namespace std;

int X, Y;

int main(){
    cin >> X >> Y;

    vector<pair<int, int>>ans;
    while(X >=2 || Y >= 2){
        ans.push_back(make_pair(X, Y));
        if(X > Y) X -= Y;
        else Y -= X;
    }
    reverse(ans.begin(), ans.end());

    cout << ans.size() << endl;
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i].first << ' ' << ans[i].second << endl;
    }
} 