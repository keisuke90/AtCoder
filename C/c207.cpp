#include <bits/stdc++.h>
using namespace std;

int N;
vector<pair<double, double>> vec;

int main(){
    int T, X, Y;
    cin >> N;
    vec.resize(N);
    for(int i = 0; i < N; i++) {
        cin >> T >> X >> Y;
        if(T == 1) vec[i] = make_pair(X, Y);
        else if(T == 2) vec[i] = make_pair(X, Y-0.5);
        else if(T == 3) vec[i] = make_pair(X+0.5, Y);
        else vec[i] = make_pair(X+0.5, Y-0.5);
    }
    
    sort(vec.begin(), vec.end());

    int ans = 0;
    for(int i = 0; i < N; i++){
        for(int j = i+1; j < N; j++){
            ans += (max(vec[i].first, vec[j].first) <= min(vec[i].second, vec[j].second));
        }
    }

    cout << ans << endl;
}